// 函数: _Z16DefCalcHashFieldPK8DefField5Crc32R5XListIPK6DefMapEb
// 地址: 0xc891f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x22 = arg2

if ((zx.d(*(arg1 + 0x50)) & 0x80) == 0)
    if ((arg4.d & 1) != 0)
        *(arg1 + 8)
        *arg1
        XTrace("          field %s pos %d crc %x")
    
    uint32_t x0_1 = memcrc32(arg1, 4, x22)
    uint8_t* x22_1 = *(arg1 + 8)
    int32_t x0_5 = memcrc32(x22_1, strlen(x22_1), x0_1)
    bool x22_2 = arg4 & 1
    int32_t x0_7 = DefCalcHashFieldType(*(arg1 + 0x18), zx.q(x0_5), arg3, x22_2)
    uint32_t x0_17 = memcrc32(arg1 + 0x54, 4, 
        memcrc32(arg1 + 0x50, 4, 
            memcrc32(arg1 + 0x40, 4, 
                memcrc32(arg1 + 0x20, 4, 
                    DefCalcHashFieldType(*(arg1 + 0x30), zx.q(x0_7), arg3, x22_2)))))
    int32_t x8_3 = *(arg1 + 0x50)
    x22 = x0_17
    
    if ((x8_3 & 3) == 0)
        int32_t x8_6
        
        if ((x8_3 & 0x20) == 0)
            x8_6 = *(*(arg1 + 0x18) + 0x18)
        
        if ((x8_3 & 0x20) != 0 || x8_6 - 0x13 u< 2)
            return DefCalcHashAttribTable(*(arg1 + 0x38), zx.q(x22), arg3, arg4 & 1) __tailcall
        
        if (x8_6 == 6)
            int32_t var_34 = (*(arg1 + 0x38)).d
            x22 = memcrc32(&var_34, 4, x22)
    else
        uint8_t* x19_2 = *(arg1 + 0x38)
        
        if (*(x19_2 + 8) != 0)
            int64_t i
            
            do
                uint32_t x0_19 = memcrc32(x19_2, 4, x22)
                char* x20_2 = *(x19_2 + 8)
                uint32_t x0_23 = memcrc32(x20_2, strlen(x20_2), x0_19)
                i = *(x19_2 + 0x18)
                x22 = x0_23
                x19_2 = &x19_2[0x10]
            while (i != 0)

return zx.q(x22)
