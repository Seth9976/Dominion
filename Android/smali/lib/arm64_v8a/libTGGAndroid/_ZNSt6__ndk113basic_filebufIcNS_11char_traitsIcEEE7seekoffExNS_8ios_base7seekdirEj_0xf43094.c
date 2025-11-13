// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj
// 地址: 0xf43094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0x80)

if (x0 == 0)
    sub_f43870()
    noreturn

int64_t x21 = arg2
int32_t x0_1 = (*(*x0 + 0x30))()
int64_t result = *(arg1 + 0x78)

if (result != 0)
    if (x21 == 0 || x0_1 s>= 1)
        result = 0
        
        if ((*(*arg1 + 0x30))(arg1) == 0 && arg3 u<= 2)
            off_t offset
            
            if (x0_1 s> 0)
                offset = sx.q(x0_1) * x21
            else
                offset = 0
            
            if (fseeko(*(arg1 + 0x78), offset, arg3) == 0)
                ftello(*(arg1 + 0x78))
                result = *(arg1 + 0x88)
            else
                result = 0
    else
        result = 0

return result
