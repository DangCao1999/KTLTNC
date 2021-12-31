# Kiểu dữ liệu

Biết những cấu trúc dữ liệu, để áp dụng vào thực tế cho hiệu quả

Kiểm tra kiến thức về kiểu dữ liệu

## Khai báo biến

Một số ngôn ngữ cho phép người lập trình không cần phải khai báo biến

Đối với những ngôn ngữ như v:
    * Nên khai báo trước tất cả các biến
    * Nên có 1 loại quy ước đặt tên

## Khởi tạo giá trị cho biến

Nên khởi tạo giá ngay khi khai báo vì, trong C/C++, biến không đc khởi tạo giá trị - Đôi lúc biến sẽ chứa một giá trị trước đó có trên ram
Khởi tạo biến tránh gặp lỗi, gặp vấn đề:
    * Khởi tạo giá trị cho biến khi được khai báo
    * Nên khai báo biến gần nơi sử dụng nó
    * Sử dụng final hoặc const khi biến ko thay bao giờ thay đổi giá trị, tránh việc thay đổi giá trị một cách nhầm lẫn
    * Lưu ý những biến đếm và biến tích lũy
    * Đối với class trong constructor nên khởi tạo các giá trị ban đầu cho nó

## Phạm vi của biến

## Giữ cho các biến sống càng ngắn càng tốt
    Thời gian sống của biến, tổng số lệnh qua đó biến vẫn còn sống
    Nên tránh sử dụng biến toàn cục