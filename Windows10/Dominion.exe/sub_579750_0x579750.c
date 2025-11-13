// 函数: sub_579750
// 地址: 0x579750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* result = __security_cookie ^ &__saved_ebp
void* result_2 = result
int32_t* ebx = arg2
int32_t var_c98 = 0x3ee
int32_t* var_c94 = ebx

if (ebx[0x320] != 0)
    uint32_t esi_2 = zx.d((*ebx).w)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t edx = ebx[0x320]
    int32_t edx_1 = edx - 1
    int32_t var_ca0_1 = edx_1
    result = arg3[esi_2 * 0x19 + 0x69c]
    void* result_1 = result
    
    if (edx - 1 s>= 0)
        while (true)
            uint32_t esi_3 = zx.d(ebx[edx_1].w)
            
            if (esi_3 u>= 0x320)
                sub_591930()
                edx_1 = var_ca0_1
            
            int32_t ecx = var_c98
            
            if (ecx == 0x3ee)
                ecx = arg3[esi_3 * 0x19 + 0x694]
                
                if (ecx == 0x3ef || ecx == 0x3f0)
                    var_c98 = ecx
                else
                    ecx = var_c98
            
            uint32_t var_c8c
            uint32_t eax_11
            int32_t esi_5
            
            if (arg4 == 0x3ea)
                esi_5 = var_c94[edx_1]
                result = sub_582de0(0, esi_5, arg3, ecx)
                
                if (result.b == 0)
                    eax_11 = sub_590990(&var_c8c, 0xffffffff, arg3, 5, &var_c8c)
                    
                    if (eax_11 != 0)
                        if (eax_11 != 1)
                            sub_591930()
                        
                        eax_11 = var_c8c
                    
                    if (esi_5 == eax_11)
                        eax_11 = sub_591930()
                    
                    int32_t var_cd0_2
                    __builtin_memset(&var_cd0_2, 0, 0x24)
                    result = sub_5822e0(eax_11, result_1, arg3, esi_5, 0xd, 0x3ea, 3, 0, 0, 0, 0, 
                        0, nullptr, 0, nullptr, nullptr)
            else if (arg4 == 0x3eb)
                esi_5 = var_c94[edx_1]
                result = sub_582de0(0, esi_5, arg3, ecx)
                
                if (result.b == 0)
                    eax_11 = sub_590990(&var_c8c, 0xffffffff, arg3, 5, &var_c8c)
                    
                    if (eax_11 != 0)
                        if (eax_11 != 1)
                            sub_591930()
                        
                        eax_11 = var_c8c
                    
                    if (esi_5 == eax_11)
                        eax_11 = sub_591930()
                    
                    int32_t var_cd0_1
                    __builtin_memset(&var_cd0_1, 0, 0x24)
                    result = sub_5822e0(eax_11, result_1, arg3, esi_5, 0xd, 0x3eb, 4, 0, 0, 0, 0, 
                        0, nullptr, 0, nullptr, nullptr)
            else
                if (arg4 != 0x3ec)
                    sub_63b870(arg4 - 0x3ec, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x17c1, "Unreveal")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                esi_5 = var_c94[edx_1]
                result = sub_582de0(0, esi_5, arg3, ecx)
                
                if (result.b == 0)
                    eax_11 = sub_590990(&var_c8c, 0xffffffff, arg3, 5, &var_c8c)
                    
                    if (eax_11 != 0)
                        if (eax_11 != 1)
                            sub_591930()
                        
                        eax_11 = var_c8c
                    
                    if (esi_5 == eax_11)
                        eax_11 = sub_591930()
                    
                    int32_t var_cd0
                    __builtin_memset(&var_cd0, 0, 0x24)
                    result = sub_5822e0(eax_11, result_1, arg3, esi_5, 0xd, 0x3ec, 8, 0, 0, 0, 0, 
                        0, nullptr, 0, nullptr, nullptr)
            edx_1 = var_ca0_1 - 1
            bool cond:1_1 = var_ca0_1 - 1 s< 0
            var_ca0_1 = edx_1
            
            if (cond:1_1)
                break
            
            ebx = var_c94

CookieCheckFunction(result)
return result
