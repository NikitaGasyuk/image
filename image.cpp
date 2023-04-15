#include<opencv2/opencv.hpp>
#include<iostream>


using namespace std;
using namespace cv;

int main()
{
    // загружаем картинку
    Mat img_color = imread("путь к изображению", IMREAD_UNCHANGED);
    // Проверяем, удалось ли загрузить картинку
    if (img_color.empty()) {
        cerr << "Error: Could not open or find the image!\n";
        return 1;
    }

    // Выводим параметры картинки в консоль
    cout << "[i] channels: " << img_color.channels() << '\n';
    cout << "[i] pixel depth: " << img_color.depth() << " bits\n";
    cout << "[i] width: " << img_color.cols << " pixels\n";
    cout << "[i] height: " << img_color.rows << " pixels\n";
    cout << "[i] image size: " << img_color.total() * img_color.elemSize() << " bytes\n";
    cout << "[i] width step: " << img_color.step << " bytes\n";

    // считываем и выводим картинку
    namedWindow("color image", WINDOW_AUTOSIZE);
    imshow("color image", img_color);  
    waitKey(0);                        
    imwrite("color image", img_color);
    
}
