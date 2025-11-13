// 函数: sub_571fa0
// 地址: 0x571fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg5
uint32_t ebx = arg2

if (result != 0)
    void* esi_1 = arg6
    int32_t var_20_1
    char const* const var_1c_1
    char* ecx
    
    if (ebx == 0xffffffff && esi_1 == 0)
        var_1c_1 = "AddTokens"
        var_20_1 = 0x271
        ecx = "who != PLAYER_NONE || where != CW_NONE"
    label_57229e:
        sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
            var_20_1, var_1c_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (esi_1 == 0x476)
        if (ebx == 0xffffffff)
            sub_591930()
            result = arg5
        
        esi_1 = 0x3f1
    
    if (result s< 0)
        uint32_t eax = sub_571f30(result, ebx, arg3, arg4, esi_1, arg7)
        uint32_t esi_2 = eax
        
        if (esi_2 == 0xffffffff)
            eax = sub_591930()
        
        result = sub_571cb0(eax, esi_2, arg3, arg5, arg8, arg10)
        goto label_57226e
    
    int32_t eax_1 = arg4
    
    if (esi_1 == 0x3f1 && eax_1 == 0xc00)
        int32_t ecx_4 = arg3[0x673]
        
        if (ebx == ecx_4)
            uint32_t eax_2 = arg3[0x674]
            
            if (ecx_4 != eax_2)
                ebx = eax_2
            
            eax_1 = arg4
    
    uint32_t ecx_5 = 0xd
    uint32_t var_8_1 = ebx
    uint32_t var_c_1 = 0xd
    
    if (arg9 != 0xffffffff)
        var_8_1 = arg9
        
        if ((arg10 & 0x10) == 0)
            ecx_5 = 0xc
        
        var_c_1 = ecx_5
    
    int32_t eax_3 = sub_571f30(eax_1, ebx, arg3, eax_1, esi_1, arg7)
    int32_t result_1
    int32_t var_28_5
    int32_t* var_24_5
    int32_t var_20_3
    uint32_t edx_7
    
    if (eax_3 != 0xffffffff)
        result = sub_571cb0(eax_3, eax_3, arg3, arg5, arg8, 0)
        
        if (esi_1 == 0x3f1)
            goto label_57226e
        
        int32_t ecx_11 = arg4
        
        if (ecx_11 != 0xe01)
            if (esi_1 == 0x474 || esi_1 == 6)
                result = arg7
                uint32_t esi_6 = zx.d(result.w)
                
                if (esi_6 u>= 0x320)
                    result = sub_591930()
                    ecx_11 = arg4
                
                edx_7 = var_8_1
                
                if (edx_7 == 0xffffffff)
                    goto label_57226e
                
                int32_t var_1c_6 = 0
                var_20_3 = arg3[esi_6 * 0x19 + 0x693]
                goto label_572256
            
            edx_7 = var_8_1
            
            if (edx_7 == 0xffffffff)
                goto label_57226e
            
            result = esi_1 - 7
            
            if (result u> 0x40)
            label_572285:
                var_1c_1 = "BoardPileWhat"
                ecx = "where >= CW_BOARD_STANDARD_START && where < END_BOARD_PILES"
                var_20_1 = 0x1118
                goto label_57229e
            
            int32_t var_1c_5 = 0
            var_20_3 = arg3[esi_1 * 4 + 0x549]
        label_572256:
            result = arg8
            var_24_5 = arg5
            var_28_5 = ecx_11
            int32_t var_2c_6 = 0
            int32_t var_30_4 = 0
            result_1 = result
        label_572266:
            result = sub_5716d0(result, var_c_1, arg3, edx_7, result_1, nullptr, 0, var_28_5, 
                var_24_5, var_20_3, 0)
        label_57226e:
            
            if (arg4 == 0x601)
                return sub_583350(arg3)
    else
        result = sub_571da0(eax_3, ebx, arg3, arg4, esi_1, arg7, arg5)
        
        if (esi_1 == 0x3f1)
            if ((arg10 & 2) == 0)
                result = arg3[0x541]
                
                if (result != 3 && result != 5 && result != 4 && result != 6 && arg3[0x540].b == 0)
                    uint32_t edx_5 = var_8_1
                    
                    if (var_8_1 == arg3[0x673])
                        edx_5 = arg3[0x674]
                    
                    result = sub_59f9b0(var_8_1, var_8_1, arg3, edx_5, 0xb, arg8, nullptr, 0, arg4, 
                        arg5, 0, 0)
            
            goto label_57226e
        
        int32_t ecx_10 = arg4
        int32_t* ebx_1
        
        if (ecx_10 == 0xc00)
            ebx_1 = arg5
            
            if (ebx_1 != 1)
                goto label_572162
        else if (ecx_10 != 0xe01)
            ebx_1 = arg5
        label_572162:
            
            if (esi_1 != 0x474 && esi_1 != 6)
                edx_7 = var_8_1
                
                if (edx_7 == 0xffffffff)
                    goto label_57226e
                
                result = esi_1 - 7
                
                if (result u> 0x40)
                    goto label_572285
                
                int32_t var_1c_3 = 0
                var_20_3 = arg3[esi_1 * 4 + 0x549]
                var_24_5 = ebx_1
                var_28_5 = ecx_10
                int32_t var_2c_4 = 0
                int32_t var_30_2 = 0
                result_1 = arg8
                goto label_572266
            
            result = arg7
            uint32_t esi_4 = zx.d(result.w)
            
            if (esi_4 u>= 0x320)
                result = sub_591930()
                ecx_10 = arg4
            
            edx_7 = var_8_1
            
            if (edx_7 == 0xffffffff)
                goto label_57226e
            
            result = esi_4 * 0x64
            int32_t var_1c_4 = 0
            var_20_3 = *(result + arg3 + 0x1a4c)
            var_24_5 = ebx_1
            var_28_5 = ecx_10
            int32_t var_2c_5 = 0
            int32_t var_30_3 = 0
            result_1 = arg8
            goto label_572266

return result
