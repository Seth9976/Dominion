// 函数: sub_7018c0
// 地址: 0x7018c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = data_147ded4
int32_t height = arg4 - arg2
int32_t width = arg3 - arg1

if (*(result + 0x41a8) == arg1 && *(result + 0x41ac) == arg2 && *(result + 0x41b0) == width
        && *(result + 0x41b4) == height)
    return result

*(result + 0x41a8) = arg1
*(result + 0x41ac) = arg2
*(result + 0x41b0) = width
*(result + 0x41b4) = height
return glScissor(arg1, arg2, width, height)
