// 函数: sub_56a3f0
// 地址: 0x56a3f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* ecx
int32_t edx
ecx, edx = __chkstk(0x1934)
__security_cookie
void arg_c9c
void* result = sub_568780(ecx, edx, ecx, &arg_c9c)
int32_t arg_14[0x320]
__builtin_memcpy(&arg_14, result, 0xc84)
void* edi_1 = ecx

if (edi_1 == 0x3eb)
    result = sub_573400()
    int32_t* ecx_2 = *(result + 4)
    int32_t edx_1 = ecx_2[0x541]
    
    if (edx_1 != 3 && edx_1 != 5 && edx_1 != 4 && edx_1 != 6 && ecx_2[0x540].b == 0)
        int32_t edx_2 = *(result + 0xc)
        int32_t eax_3 = edx_2
        
        if (edx_2 == ecx_2[0x673])
            eax_3 = ecx_2[0x674]
        
        result = sub_59f9b0(eax_3, edx_2, ecx_2, eax_3, 0x2b, 0, &arg_14, arg2, 0x3eb, 0x3ec, 0, 0)

int32_t esi_1 = 0

if (arg2 s> 0)
    do
        int32_t var_4c_1
        void* var_48_1
        int128_t* var_44_1
        int32_t var_40_1
        void* var_3c_1
        int32_t var_38_2
        int32_t var_34_2
        int32_t var_30_2
        int32_t var_2c_2
        uint32_t __return_addr_1
        uint32_t ecx_3
        void* edi
        
        if (edx != 0x3ea)
            int32_t eax_10
            
            if (edx == 0x3ec)
                arg1.d = 0
                var_4 = arg_14[esi_1]
                edi = sub_573400()
                __return_addr = *(edi + 4)
                eax_10 = var_4
                ecx_3 = zx.d(eax_10.w)
                
                if (ecx_3 u>= 0x320)
                    sub_591930()
                    eax_10 = var_4
                
                __builtin_memset(&var_2c_2, 0, 0x18)
                var_30_2 = *(edi + 0x30)
                var_34_2 = *(edi + 0x2c)
                var_38_2 = *(edi + 0x28)
                var_3c_1 = 8
                var_40_1 = 0x3ec
            else if (edx != 0x3eb)
                if (edx != 1)
                    sub_63b870(result, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0xeac, "MovePileTo")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                arg1.d = 0
                var_4 = arg_14[esi_1]
                edi = sub_573400()
                __return_addr = *(edi + 4)
                eax_10 = var_4
                ecx_3 = zx.d(eax_10.w)
                
                if (ecx_3 u>= 0x320)
                    sub_591930()
                    eax_10 = var_4
                
                __builtin_memset(&var_2c_2, 0, 0x18)
                var_30_2 = *(edi + 0x30)
                var_34_2 = *(edi + 0x2c)
                var_38_2 = *(edi + 0x28)
                var_3c_1 = nullptr
                var_40_1 = 1
            else
                arg1.d = 0
                var_4 = arg_14[esi_1]
                edi = sub_573400()
                __return_addr = *(edi + 4)
                eax_10 = var_4
                ecx_3 = zx.d(eax_10.w)
                
                if (ecx_3 u>= 0x320)
                    sub_591930()
                    eax_10 = var_4
                
                __builtin_memset(&var_2c_2, 0, 0x18)
                var_30_2 = *(edi + 0x30)
                var_34_2 = *(edi + 0x2c)
                var_38_2 = *(edi + 0x28)
                var_3c_1 = 1
                var_40_1 = 0x3eb
            
            var_44_1 = 0xb
            var_48_1 = ecx
            var_4c_1 = eax_10
            __return_addr_1 = __return_addr
        else
            arg1.d = 0
            var_4 = arg_14[esi_1]
            edi = sub_573400()
            uint32_t __return_addr_2 = *(edi + 4)
            int32_t eax_6 = var_4
            ecx_3 = zx.d(eax_6.w)
            
            if (ecx_3 u>= 0x320)
                sub_591930()
                eax_6 = var_4
            
            __builtin_memset(&var_2c_2, 0, 0x18)
            var_30_2 = *(edi + 0x30)
            var_34_2 = *(edi + 0x2c)
            var_38_2 = *(edi + 0x28)
            var_3c_1 = 3
            var_40_1 = 0x3ea
            var_44_1 = 0xb
            var_48_1 = ecx
            var_4c_1 = eax_6
            __return_addr_1 = __return_addr_2
        
        int32_t var_28_2
        char* var_24_2
        int32_t var_20_2
        void* var_1c_2
        void* var_18_2
        result = sub_582d10(__return_addr_1, *(ecx_3 * 0x64 + __return_addr_1 + 0x1a70), 
            *(edi + 4), var_4c_1, var_48_1, var_44_1, var_40_1, var_3c_1, var_38_2, var_34_2, 
            var_30_2, var_2c_2, var_28_2, var_24_2, var_20_2, var_1c_2, var_18_2)
        esi_1 += 1
    while (esi_1 s< arg2)
    
    edi_1 = ecx

if (arg1 == 0)
    result = edi_1 - 1
    
    if (result u<= 0x47)
        int32_t arg_191c = 0
        result = sub_56f1a0(result, &arg_c9c, 0x13, 0)

CookieCheckFunction(result)
return result
