import PIL
import pytesseract
image = PIL.Image.open('3.jpg')  # Open image object using PIL
print pytesseract.image_to_string(image)  