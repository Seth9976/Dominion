// 函数: sub_10a1ac8
// 地址: 0x10a1ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result
char* x8_1

if (arg2 u> 4)
    int128_t v0_1
    result, v0_1 = operator new(0x20)
    x8_1 = result + 0x1e
    arg3[1].q = result
    *arg3 = data_71c370
    __builtin_strncpy(result, "unspecified future_errc value\n", 0x1e)
else
    switch (arg2)
        case 0, 4
            SystemHintOp_BTI()
            int128_t v0
            result, v0 = operator new(0x60)
            *arg3 = data_71b4e0
            arg3[1].q = result
            __builtin_strncpy(result, 
                "The associated promise has been destructed prior to the associated state becoming ready.", 
                0x58)
            x8_1 = result + 0x58
        case 1
            SystemHintOp_BTI()
            int128_t v0_2
            result, v0_2 = operator new(0x50)
            *arg3 = data_71bfe0
            arg3[1].q = result
            __builtin_strncpy(result, 
                "The future has already been retrieved from the promise or packaged_task.", 0x48)
            x8_1 = result + 0x48
        case 2
            SystemHintOp_BTI()
            int128_t v0_3
            result, v0_3 = operator new(0x30)
            arg3[1].q = result
            *arg3 = data_71a900
            __builtin_strncpy(result, "The state of the promise has already been set.", 0x2e)
            x8_1 = result + 0x2e
        case 3
            SystemHintOp_BTI()
            int128_t v0_4
            result, v0_4 = operator new(0x50)
            *arg3 = data_71cfd0
            arg3[1].q = result
            __builtin_strncpy(result, 
                "Operation not permitted on an object without an associated state.", 0x41)
            x8_1 = result + 0x41

*x8_1 = 0
return result
