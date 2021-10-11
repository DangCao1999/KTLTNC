# Tại sao nên tạo ra routine:
- Giảm tính phức tạp của vấn đề
- Giúp tổng quát hóa vấn đề tốt hơn, đi từ mức khái quát (cách mình hay làm ^.^)
- Tránh việc trùng lặp code
	+ Khi sửa phải sửa nhiều chỗ
- Tạo lớp con
- Che đi những quá trình xử lý nghiệp vụ bên trong
- Cải thiện sự tương thích, cho phép sử dụng ở nhiều nơi
- Đơn giản hóa quá trình kiểm thử
- Tăng hiệu suất của chương trình

**=> giảm tính phức tap, và giảm trùng lặp code, giúp người lập trình lập trình tốt hơn, chương trình chạy tốt hơn**

# Các thiết kế routine
**Mỗi routine chỉ nên thực hiên duy nhất một hành động mà thôi**

## Cách đặt tên và những lưu ý khi đặt tên của routine:
- Tên nên mô tả rõ nghĩa của chức năng của routine

- Tránh sử dụng những từ vô nghĩa, tên không rõ ràng

- Tránh đặt tên routine thông qua những con số

- Cân đối giữa chiều dài tên routine và ý nghĩa của nó, tên không nên quá dài

- Tên của routine tốt cũng mô tả giá trị nó sẽ trả về

- Tên của routine nên bắt đầu bằng động từ

- Nên sử dụng các cặp từ đối lập ví dụ mở/đóng file: openFile - closeFile

- Nên có một quy ước chung

	VD khi không có quy ước:
	
	Khi thì lấy id bằng cách này, khi thì lấy bằng cách khác

		employee.id.Get()
	
		dependency.GetId()

- Độ dài của một routine tốt khi được thấy trọn các dòng code qua một màn hình  (< 200) (chỉ ở mức tương đối)

- Đối với lập trình hướng thủ tục

	Tên của routine nên bắt đầu bằng động từ với một object được xử lý
- Đối với lập trình hướng đối tượng

	Tên của routine không cần thiết có object được xủ lý vì hàm đã nằm trong chính object của nó

## Cách thiết kế các tham sô của hàm
- Khi thiết kế một routine tham số truyền vào nên đặt theo thứ tự input - modify - output (từ khóa in, out trong C#)

- Những lưu ý với tham số:
	- Những routine giống nhau về tham số truyền vào nên có chung một thứ tự của các tham số
	- Sử dụng hết những tham số, tránh việc liệt kê rồi không bao giờ dùng đến tham số
	- Những tham số, biến chứa trạng thái, lỗi nên được liệt kê cuối cùng
	- Nên tránh sử dụng trực tiếp tham số truyền vào, nên lưu trữ qua biến trung gian, tránh việc thay đổi không kiểm soát dược của giá trị được truyền vào
	- Giới hạn tham số của một routine khoảng < 7

## Lưu ý cho việc sử dụng hàm
- Trong một số tài liệu, ngôn ngữ

	*Hàm (function) là đoạn mã thực hiện một nhiệm vụ nào đó có trả về giá trị*
	
	*Thủ tục (procedure) là đoạn mã thực hiện một nhiệm vụ nào đó **không** có trả về giá trị*

- Đối với giá trị trả về

	- Hàm trả về có trả về giá trị thì phải được đảm bảo rằng có trả về giá trị (trong if else, switch case)

	- Tránh trả về tham chiếu của biến

## Macro routine

- Sử dụng ngoặc tròn cho các tham số truyền vào
- Sử dụng ngoặc móc để quy định khối lệnh của macro

## Inline routine
Inline routine cho phép lập trình viên xem nó như một routine nhưng khi compile body routine sẽ được thay thế vào chỗ được gọi inline routine
- Ưu điểm: sẽ chạy nhanh hơn vì không phải thực hiện một lời gọi hàm
- Nhược điểm: 
	- nếu được gọi ở nhiều nơi sẽ làm phình to kích thước của chương trình
	- trong c++ bắt buộc phải để trong header file và làm vi phạm tính đóng gói của oop

# Chú thích thêm
- **Macro** là một chuỗi lệnh thực hiện một chức năng nào đó C vs C++ mới có
- **Error** có 3 loại error:
	* Lỗi logic
	* Lỗi runtime
	* Lỗi compile