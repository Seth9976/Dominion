// 函数: _Z9VRBindHMDv
// 地址: 0x1060274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *gVR

if (result != 0)
    if (((*(*result + 0x28))(result, gVR + 0xb8) & 1) != 0)
        return 1
    
    result = nullptr
    *(gVR + 0xf4) = 0

return result
