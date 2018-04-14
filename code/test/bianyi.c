#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 10
#define M 16

char *p0, *p1, *p2, *p3, *t1, *str, *t3="const", *digi, *flo;
char cha;

int ci = 0, cf = 0, cc = 0, cs = 0;
void measurefw();
void measure_iden();
void measure_str();
void measure_digit();
void measure_cha();

int main (void)
{
	printf("input string:\n");
	p0 = (char *) malloc(sizeof(char)*N);
	p1 = (char *) malloc(sizeof(char)*M);
	p2 = (char *) malloc(sizeof(char)*M);
	p3 = (char *) malloc(sizeof(char)*M);

	nclude <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
		
#define N 10
#define M 16
		
		char *p0, *p1, *p2, *p3, *t1, *str, *t3="const", *digi, *flo;
	char cha;
	
	int ci = 0, cf = 0, cc = 0, cs = 0;
	void measurefw();
	void measure_iden();
	void measure_str();
	void measure_digit();
	void measure_cha();
	
	int main (void)
	{
			printf("input string:\n");
				p0 = (char *) malloc(sizeof(char)*N);
					p1 = (char *) malloc(sizeof(char)*M);
						p2 = (char *) malloc(sizeof(char)*M);
							p3 = (char *) malloc(sizeof(char)*M);
							
								gets(p0);
									putchar('\n');
										measurefw();
										
											while (*p0 == ' ' || *p0 == ',')
													{
																p0++;
																		if (*p0 == ' ' || *p0 == ',')
																						continue;
																				else
																							{
																											measure_iden();
																														if (!(isdigit(*p0)) && (*p0) != '\"' && (*p0) != '\'')
																																		{
																																							
																																							fprintf(stderr, "%c!!!!Const data is wrong\n", *p0);
																																											exit(1);
																																														}
																																	else if (*p0 == '\"')
																																					{
																																										p0++;
																																														measure_str();
																																																	}
																																				else if (isdigit(*p0))
																																								{
																																													measure_digit();
																																																}
																																							else if (*p0 == '\'')
																																											{
																																																p0++;
																																																				measure_cha();
																																																							}
																																									}
																					}
												if (*p0 != ';')
														{
																	fprintf(stderr, "This centence is wrong.\n");
																			exit(1);
																				}
													else
															{
																		printf("int_num = %d; char_num = %d; string_num = %d\
																								float_num = %d.\n", ci, cc, cs, cf);
																			}
														return 0;
	}
	
	void measurefw()
	{
			while (*p0 != ' ')
					{
								if (*p0 == *t3)
											{
															p0++;
																		t3++;
																				}
										else
													{
																	fprintf(stderr, "This string is not \
																								const declaration.\n");
																				exit(1);
																						}	
											}
	}
	
	void measure_iden()
	{
			if (*p0 !='_' && !isalpha(*p0))
					{
								fprintf(stderr, "Const name is wrong.\n");
										exit(1);
											}
				else if (*p0 == '_' || isalpha(*p0))
						{
									t1 = p1;
											while (*p0 != '=')
														{
																		*p1 = *p0;
																					p0++;
																								p1++;
																										}
													*p1 = '\0';
															p0++;
																}
					printf("%s", t1);
	}
	
	void measure_str()
	{
			str = p2;
				while (*p0 != '\"')
						{
									*p2 = *p0;
											if (*p0 == ';')
														{
																		fprintf(stderr, "String data is wrong.\n");
																					exit(1);
																							}
													p0++;
															p2++;
																}
					*p2 = '\0';
						p0++;
							cs++;
								printf("(string, \"%s\")\n", str);
	}
	
	
	void measure_digit()
	{
			char *jud;
				int mark = 0;
					jud = p0;
					
						for (; *jud != ';' && *jud != ','; jud++)
								{
											if (*jud == '.')
														{
																		mark = 1;
																					break;
																							}
												}
						
							if (mark == 0)
									{
												digi = p2;
														while (*p0 != ',' && *p0 != ';')
																	{
																					*p2 = *p0;
																								p0++;
																											p2++;
																													}
																*p2 = '\0';
																		ci++;
																				printf("(integer, %s)\n", digi);
																					}
								if (mark == 1)
										{
													flo = p2;
															while (*p0 != ';' && *p0 != ',')
																		{
																						*p2 = *p0;
																									p0++;
																												p2++;
																														}
																	*p2 = '\0';
																			cf++;
																					printf("(float, %s)\n", flo);
																						}
	}
	
	void measure_cha()
	{
			char *jud;
				jud = p0;
					if (*(jud+1) == '\'' && *(jud) != '\'')
							{
										cha = *p0;
												p0 = p0+2;
														cc++;
															}
						else 
								{
											fprintf(stderr, "char data is wrong.\n");
													exit(1);
														}
							printf("(char, %c)\n", cha);
	}
	
	gets(p0);
	putchar('\n');
	measurefw();

	while (*p0 == ' ' || *p0 == ',')
	{
		p0++;
		if (*p0 == ' ' || *p0 == ',')
			continue;
		else
		{
			measure_iden();
			if (!(isdigit(*p0)) && (*p0) != '\"' && (*p0) != '\'')
			{
				
				fprintf(stderr, "%c!!!!Const data is wrong\n", *p0);
				exit(1);
			}
			else if (*p0 == '\"')
			{
				p0++;
				measure_str();
			}
			else if (isdigit(*p0))
			{
				measure_digit();
			}
			else if (*p0 == '\'')
			{
				p0++;
				measure_cha();
			}
		}
	}
	if (*p0 != ';')
	{
		fprintf(stderr, "This centence is wrong.\n");
		exit(1);
	}
	else
	{
		printf("int_num = %d; char_num = %d; string_num = %d\
				float_num = %d.\n", ci, cc, cs, cf);
	}
	return 0;
}

void measurefw()
{
	while (*p0 != ' ')
	{
		if (*p0 == *t3)
		{
			p0++;
			t3++;
		}
		else
		{
			fprintf(stderr, "This string is not \
					const declaration.\n");
			exit(1);
		}	
	}
}

void measure_iden()
{
	if (*p0 !='_' && !isalpha(*p0))
	{
		fprintf(stderr, "Const name is wrong.\n");
		exit(1);
	}
	else if (*p0 == '_' || isalpha(*p0))
	{
		t1 = p1;
		while (*p0 != '=')
		{
			*p1 = *p0;
			p0++;
			p1++;
		}
		*p1 = '\0';
		p0++;
	}
	printf("%s", t1);
}

void measure_str()
{
	str = p2;
	while (*p0 != '\"')
	{
		*p2 = *p0;
		if (*p0 == ';')
		{
			fprintf(stderr, "String data is wrong.\n");
			exit(1);
		}
		p0++;
		p2++;
	}
	*p2 = '\0';
	p0++;
	cs++;
	printf("(string, \"%s\")\n", str);
}


void measure_digit()
{
	char *jud;
	int mark = 0;
	jud = p0;

	for (; *jud != ';' && *jud != ','; jud++)
	{
		if (*jud == '.')
		{
			mark = 1;
			break;
		}
	}

	if (mark == 0)
	{
		digi = p2;
		while (*p0 != ',' && *p0 != ';')
		{
			*p2 = *p0;
			p0++;
			p2++;
		}
		*p2 = '\0';
		ci++;
		printf("(integer, %s)\n", digi);
	}
	if (mark == 1)
	{
		flo = p2;
		while (*p0 != ';' && *p0 != ',')
		{
			*p2 = *p0;
			p0++;
			p2++;
		}
		*p2 = '\0';
		cf++;
		printf("(float, %s)\n", flo);
	}
}

void measure_cha()
{
	char *jud;
	jud = p0;
	if (*(jud+1) == '\'' && *(jud) != '\'')
	{
		cha = *p0;
		p0 = p0+2;
		cc++;
	}
	else 
	{
		fprintf(stderr, "char data is wrong.\n");
		exit(1);
	}
	printf("(char, %c)\n", cha);
}

