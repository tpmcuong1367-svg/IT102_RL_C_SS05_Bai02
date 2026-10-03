Báo cáo Phân tích & Thiết kế Giải pháp (Dành cho README.md)

Phân tích bài toán (I/O) Dữ liệu đầu vào (Input):
Mảng tuoi_benh_nhan[4]: Lưu trữ số tuổi của 4 bệnh nhân (Kiểu int).

Mảng co_bao_hiem[4]: Lưu trữ trạng thái bảo hiểm y tế của 4 bệnh nhân (Kiểu int, giá trị 0 hoặc 1).

Đại lượng cần tính toán (Process):

Kiểm tra tính hợp lệ của mảng tuổi (khoảng 1 - 120).

Kiểm tra và chuẩn hóa mảng BHYT (đưa các giá trị khác 0 và 1 về 0).

Tính toán phí khám ghi vào mảng phi_kham[4] (200.000 VNĐ hoặc 40.000 VNĐ).

Đếm tổng số bệnh nhân thuộc luồng "ƯU TIÊN" (tuổi > 70).

Cộng dồn tổng doanh thu từ mảng phi_kham.

Dữ liệu đầu ra (Output):

Bảng danh sách chi tiết 4 bệnh nhân (Độ tuổi, BHYT, Luồng, Phí khám).

Tổng số ca ưu tiên.

Tổng doanh thu thực tế.

Đề xuất giải pháp & Thiết kế các bước Tư duy xử lý dựa trên việc duyệt qua từng index của mảng (từ 0 đến 3) bằng vòng lặp. Tại mỗi vị trí (ứng với một bệnh nhân), hệ thống áp dụng các lớp màng lọc (validation) trước khi tính toán:
Bước 1 - Khởi tạo & Nhập liệu: Khai báo 3 mảng kích thước 4 và các biến lưu trữ tổng kết. Nhập liệu cho mảng tuổi và BHYT.

Bước 2 - Lọc tuổi (Age Validation): Kiểm tra tuoi_benh_nhan[i]. Nếu <= 0 hoặc > 120, trực tiếp gán phi_kham[i] = 0 và đánh dấu trạng thái "LỖI DỮ LIỆU", bỏ qua các bước tính toán tiếp theo cho bệnh nhân này.

Bước 3 - Lọc BHYT (Insurance Validation): Nếu co_bao_hiem[i] khác 0 và khác 1, tự động ép co_bao_hiem[i] = 0.

Bước 4 - Tính phí & Phân luồng: Dựa vào trạng thái BHYT đã chuẩn hóa để tính phi_kham[i]. Nếu tuoi_benh_nhan[i] > 70, tăng biến đếm số ca ưu tiên. Cộng dồn phi_kham[i] vào tổng doanh thu.

Bước 5 - Trích xuất báo cáo: In kết quả trực quan ra màn hình.
