// 函数: _Z16LanguageStateSet9UI2Handle
// 地址: 0x9cb11c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GetCurrentLanguage()
uint64_t x8 = zx.q(result.d - 1)

if (x8.d u<= 0x12)
    switch (x8)
        case 0
            return UI2SetState(zx.q(arg1), &data_11cfe78, 0xffffffff, 0) __tailcall
        case 1
            return UI2SetState(zx.q(arg1), &data_11cfe90, 0xffffffff, 0) __tailcall
        case 2
            return UI2SetState(zx.q(arg1), &data_11cfea8, 0xffffffff, 0) __tailcall
        case 0xf
            return UI2SetState(zx.q(arg1), &data_11cfe18, 0xffffffff, 0) __tailcall
        case 0x10
            return UI2SetState(zx.q(arg1), &data_11cfe30, 0xffffffff, 0) __tailcall
        case 0x11
            return UI2SetState(zx.q(arg1), &data_11cfe60, 0xffffffff, 0) __tailcall
        case 0x12
            return UI2SetState(zx.q(arg1), &data_11cfe48, 0xffffffff, 0) __tailcall

return result
