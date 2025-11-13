// 函数: sub_701930
// 地址: 0x701930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = data_147ded4
int32_t height = arg4 - arg2
int32_t width = arg3 - arg1

if (*(result + 0x4198) == arg1 && *(result + 0x419c) == arg2 && *(result + 0x41a0) == width
        && *(result + 0x41a4) == height)
    return result

*(result + 0x4198) = arg1
*(result + 0x419c) = arg2
*(result + 0x41a0) = width
*(result + 0x41a4) = height
return glViewport(arg1, arg2, width, height)
