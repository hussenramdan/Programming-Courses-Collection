# استدعاء مكتبة Pillow
from PIL import Image, ImageFilter, ImageDraw, ImageFont

# -------------------------
# 1. فتح صورة وعرضها
# -------------------------
img = Image.open("example.jpg")  # ضع اسم صورتك هنا
img.show()  # يفتح الصورة في برنامج العرض الافتراضي

# -------------------------
# 2. معرفة معلومات عن الصورة
# -------------------------
print("Format:", img.format)  # صيغة الصورة (JPEG, PNG ...)
print("Size:", img.size)      # الحجم (العرض, الطول)
print("Mode:", img.mode)      # نمط الألوان (RGB, L, ...)

# -------------------------
# 3. تعديل حجم الصورة (Resize)
# -------------------------
img_resized = img.resize((300, 300))  # تغيير الحجم إلى 300x300
img_resized.show()

# -------------------------
# 4. قص جزء من الصورة (Crop)
# -------------------------
box = (100, 100, 400, 400)  # (left, top, right, bottom)
img_cropped = img.crop(box)
img_cropped.show()

# -------------------------
# 5. تدوير الصورة (Rotate)
# -------------------------
img_rotated = img.rotate(90)  # تدوير 90 درجة
img_rotated.show()

# -------------------------
# 6. تطبيق فلاتر على الصورة
# -------------------------
img_blur = img.filter(ImageFilter.BLUR)      # تمويه الصورة
img_contour = img.filter(ImageFilter.CONTOUR) # تحديد الحواف
img_blur.show()
img_contour.show()

# -------------------------
# 7. تحويل الصورة إلى الأبيض والأسود
# -------------------------
img_bw = img.convert("L")  # L = grayscale
img_bw.show()

# -------------------------
# 8. رسم على الصورة
# -------------------------
draw = ImageDraw.Draw(img)
draw.rectangle([50, 50, 150, 150], outline="red", width=5)  # رسم مربع أحمر
draw.ellipse([200, 200, 300, 300], outline="blue", width=5) # رسم دائرة زرقاء
img.show()

# -------------------------
# 9. إضافة نص على الصورة
# -------------------------
font = ImageFont.load_default()  # تحميل خط افتراضي
draw.text((50, 10), "Hello Pillow!", fill="green", font=font)
img.show()

# -------------------------
# 10. حفظ الصورة المعدلة
# -------------------------
img.save("modified_image.jpg")  # حفظ الصورة باسم جديد
