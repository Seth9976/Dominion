// 函数: sub_6aa7e0
// 地址: 0x6aa7e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t var_2c
__builtin_memset(&var_2c, 0, 0x14)

if (sub_6aacf0(&var_2c, arg4) != 0)
    int32_t eax_1 = var_2c.d
    *arg3 = 8
    
    if (eax_1 != 0)
        _aligned_free(eax_1)
    
    int32_t eax_2 = arg3[1]
    int32_t var_c_1 = eax_2
    
    if (eax_2 == 0)
        int32_t var_1c
        int32_t esi_1 = var_1c
        
        if (esi_1 == 5)
            esi_1 = 4
        
        var_c_1 = esi_1
    
    FILE* _Stream = fopen(arg4, "rb")
    
    if (_Stream != 0)
        fseek(_Stream, 0, 2)
        int32_t _ElementCount = ftell(_Stream)
        fseek(_Stream, 0, 0)
        
        if (_ElementCount == 0)
            FILE* var_3c_3 = arg4
            sub_63b5f0("file too small: %s")
            fclose(_Stream)
            int32_t eax_3
            eax_3.b = 0
            return eax_3
        
        int32_t _Buffer = sub_687730(_ElementCount)
        uint32_t eax_4 = fread(_Buffer, 1, _ElementCount, _Stream)
        fclose(_Stream)
        
        if (eax_4 == _ElementCount)
            *arg2 = var_2c:4.d
            arg2[1] = var_2c:8.d
            arg2[4] = 1
            arg2[0xf] = 1
            int128_t* eax_8 = sub_687730(0x10)
            *eax_8 = zx.o(0)
            arg2[0x12] = eax_8
            arg2[5] = sub_6aa0d0(arg4)
            arg2[6] = var_c_1
            int32_t* eax_11 = arg2[0x12]
            arg2[7] = 0
            *eax_11 = _ElementCount
            *(arg2[0x12] + 8) = _Buffer
            arg2[8] = arg3[2]
            arg2[9] = arg3[3]
            int32_t eax_14
            eax_14.b = 1
            return eax_14
        
        FILE* var_3c_5 = arg4
        sub_63b5f0("failed to read: %s")
        
        if (_Buffer != 0)
            _aligned_free(_Buffer)
            int32_t eax_5
            eax_5.b = 0
            return eax_5
    else
        FILE* var_3c_2 = arg4
        sub_63b5f0("failed to open file: %s")

return 0
