import pytesseract 
import PIL
img = PIL.Image.open('2.png')
print (pytesseract.image_to_string(img))

