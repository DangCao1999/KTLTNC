# Defensive programming là gì?

    Là một biện pháp đề phòng khi mà chương trình chúng ta tránh bị lỗi khi mà gặp phải dữ liệu xấu, dữ liệu không đúng, 
    Khi có lỗi thì có một thông báo xuất ra chứ không phải khiến cho chương trình trở nên bị ngừng đột ngột

# Bảo vệ chương trình với những dữ liệu đầu vào ko hợp lệ
    
 Đối với sản phẩm cuối, input rác vào và xuất rác ra thì không tốt.

 Đối với một chương trình tốt khi gặp xử lý dữ liệu không hợp lệ:
  * Đưa vào dữ liệu không hợp lệ - ko xuất ra gì cả
  * Đưa vào dữ liệu không hợp lệ - xuất ra câu báo lỗi
  * Hoặc là ko cho phép nhập dữ liệu ko hợp lệ

 Ngày nay nếu chương trình nhập dữ liệu ko hợp lệ và xuất dữ liệu ko hợp lệ thì đó là một chương trình không tốt, không có an toàn.

 Có 3 cách để kiểm soát dữ liệu không hợp lệ:
  * Kiểm tra tất cả dữ liệu từ bên ngoài đưa vào
  * Kiểm tra tham số routine input
  * Quyết định xem input gặp những liệu không hợp lệ sẽ như thế nào

## Assertions
 * Một asserttions là những dòng code có thể được chạy trong quá trình dev, nó cho phép chương trình tự kiểm tra chính nó trong lúc chạy.

 * Khi một asertion trả về true, có nghĩa là chương trình tốt, bình thường

 * Khi một assertion trả về false, có nghĩa là chương trình đang có vấn đề, lỗi

 * Assertions giúp lập trình viên nhanh chóng tìm được lỗi, vấn đề trong code.

## Kĩ thuật xử lý lỗi
 * Trả về một giá trị trung tính VD: Tìm vị trí giá trị trong mảng - nếu ko tìm đc có thể trả về -1 - null

 * Thay thế bằng giá trị hợp lệ gần nhất VD: Chương trình đọc giá trị nhiệt kế với giá trị hợp lệ 0-100 độ, nhưng đôi lúc nhiệt kế bị lỗi đưa về giá trị âm thì chúng ta có thể thay bằng số 0

 * Ghi log lại vào file để có thể truy vết những lỗi, hoặc truy cập trái phép,...

 * Trả về mã lỗi đã được quy định sẵn

 * Gọi đến một hàm hoặc object chuyên xử lý lỗi

 * Hiển thị thông báo lỗi

 * Ngắt phiên làm việc, ví dụ như đăng nhập sai quá 3 lần chặn lại ko có đăng nhập nữa

## Exceptions
 * Sử dụng Exception để thông báo lỗi của một phần chương trình
 
 * Ném ra một Exception khi kiểm tra điều kiện

 * Tránh ném ra ngoại lệ trong contructors và destructors

 * Khi ném ra ngoại lệ phải đưa ra thông tin đầy đủ, đã gây ra ngoại lệ

 * Tránh dùng khối catch rỗng