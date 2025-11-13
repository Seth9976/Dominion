// 函数: Java_com_oculusvr_vrlib_TGActivity_jni_keyboard_change
// 地址: 0x106a670
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0_2 = strncpy(gKeyboardState, (*(*arg1 + 0x548))(arg1, arg3, 0), 0x400)
x0_2[0x3ff] = 0
*(x0_2 + 0x400) = arg4
*(x0_2 + 0x404) = arg5
jump(*(*arg1 + 0x550))
