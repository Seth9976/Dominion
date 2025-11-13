// 函数: _Z10DefBinRead11HalFilePathPvPK6DefMap
// 地址: 0xc83e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_38
__builtin_memset(&var_38, 0, 0x18)

if ((HalOpen(&var_38, arg1, 0) & 1) != 0)
    int32_t x0_4 = HalGetFileSize(&var_38)
    
    if ((HalReadAtOffset(&var_38, 0, x0_4, arg2) & 1) != 0)
        if ((DefTypeIsBuiltIn(arg3) & 1) != 0)
            HalClose(&var_38)
            return 1
        
        if (*(arg3 + 0x14) s<= x0_4)
            if ((DefBinReadFixupField(arg2, arg2, arg3, nullptr, x0_4) & 1) == 0)
                return 0
            
            HalClose(&var_38)
            return 1

return 0
