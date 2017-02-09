#ifndef _MCV_INTERFACE_H_
#define _MCV_INTERFACE_H_

#include "opencv2/opencv.hpp"
#include "Structs.h"
#include "Defines.h"

using namespace cv;

image_float_p bytemat_to_float_image(Mat src);
image_int8u_p bytemat_to_int8u_image(Mat src);
image_int16s_p int16smat_to_int16s_image(Mat src);
image_float_p floatmat_to_float_image(Mat src);

Mat int16s_image_to_int16smat(image_int16s_p src);
Mat float_image_to_bytemat(image_float_p src);
Mat int8u_image_to_int8umat(image_int8u_p src);
Mat mcv_bytemat_to_floatmat(Mat src);

void mcv_imshow(unsigned char* image, int w, int h, int c, char *winName, int _time);
void mcv_imshow_mat(Mat cv_image, char *winName, int _time);


#endif