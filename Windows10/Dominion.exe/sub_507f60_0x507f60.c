// 函数: sub_507f60
// 地址: 0x507f60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
__chkstk(0x1998)
__security_cookie
int32_t var_20 = 0
int32_t arg_70[0x320]

if (sub_568960(memset(&arg_70, 0, 0xc84), 0, 0x3ea, 0) s< 7)
    uint32_t i
    
    do
        void* eax_4 = sub_573400()
        void* esi_1 = *(eax_4 + 4)
        int32_t eax_5 = sub_571ee0(eax_4, *(eax_4 + 0xc), esi_1, 0xb08)
        
        if (eax_5 != 0xffffffff && *((eax_5 << 5) + esi_1 + 0x152dc) != 0)
            void* eax_7 = sub_573400()
            int32_t* esi_2 = *(eax_7 + 4)
            int32_t eax_8 = sub_571ee0(eax_7, *(eax_7 + 0xc), esi_2, 0xb08)
            int32_t edi_1 = eax_8
            
            if (edi_1 == 0xffffffff)
                eax_8 = sub_591930()
            
            if (esi_2[edi_1 * 8 + 0x54b7] != 1)
                eax_8 = sub_591930()
            
            sub_571cb0(eax_8, edi_1, esi_2, 0xffffffff, 0, 0)
        
        void* eax_9 = sub_573400()
        void* eax_10 = sub_5887c0(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), 0)
        
        if (eax_10 == 0)
            break
        
        uint32_t esi_3 = zx.d(eax_10.w)
        void* ecx_7 = *(sub_573400() + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        int32_t eax_12 = esi_3 * 0x64
        uint32_t eax_15
        int32_t ecx_12
        int32_t var_20_3
        uint32_t arg_cf8
        uint32_t arg_1978
        
        if (sub_5754f0(eax_12, *(eax_12 + ecx_7 + 0x1a4c), ecx_7, 4, 0) == 0)
            void* eax_27 = sub_573400()
            int32_t var_1c_4 = 0xc
            uint32_t eax_28
            eax_28, ecx_12 = sub_588db0(eax_27, *(eax_27 + 0xc), *(eax_27 + 4), 1, 0x3ea, 0, 
                *(eax_27 + 0x28), *(eax_27 + 0x2c), *(eax_27 + 0x30), &arg_cf8, 0)
            arg_1978 = eax_28
            
            if (eax_28 == 0)
                break
            
            eax_15 = arg_cf8
            
            if (eax_15 == 0)
                break
            
            if (eax_15 != eax_10)
                char const* const var_1c_7 = "Library"
                var_20_3 = 0x161
            label_508345:
                sub_63b870(eax_15, &data_801800, "card == cardTopdeck", 
                    "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp", var_20_3, "Library")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        else
            void* eax_14 = sub_573400()
            int32_t var_1c_1 = 5
            int32_t ecx_9
            eax_15, ecx_9 = sub_588db0(eax_14, *(eax_14 + 0xc), *(eax_14 + 4), 1, 0x3ee, 0, 
                *(eax_14 + 0x28), *(eax_14 + 0x2c), *(eax_14 + 0x30), &arg_cf8, 0)
            arg_1978 = eax_15
            
            if (eax_15 == 0)
                break
            
            uint32_t esi_4 = arg_cf8
            
            if (esi_4 == 0)
                break
            
            if (esi_4 != eax_10)
                char const* const var_1c_6 = "Library"
                var_20_3 = 0x151
                goto label_508345
            
            int32_t arg_14 = 0
            int64_t arg_c = 0
            int64_t arg_1c
            __builtin_memset(&arg_1c, 0, 0x1c)
            uint32_t eax_16 = zx.d(esi_4.w)
            int128_t arg_38 = 0x24.o
            int32_t var_1c_2 = ecx_9
            int128_t arg_48 = esi_4.o
            int128_t arg_58 = arg1.o
            
            if (sub_569720(&arg_38, 0x3ea, esi_4, 0x452, &arg_38) != 0x3ea)
                void* eax_23 = sub_573400()
                var_4 = *(eax_23 + 4)
                uint32_t eax_25 = eax_16
                
                if (eax_25 u>= 0x320)
                    sub_591930()
                    eax_25 = eax_16
                
                ecx_12 = sub_582d10(var_4, *(eax_25 * 0x64 + var_4 + 0x1a70), *(eax_23 + 4), esi_4, 
                    0x3ee, 0xb, 0x452, nullptr, *(eax_23 + 0x28), *(eax_23 + 0x2c), 
                    *(eax_23 + 0x30), 0, 1, nullptr, 0, nullptr, nullptr)
                eax_15 = arg2
                
                if (eax_15 s>= 0x320)
                    sub_591930()
                    eax_15 = arg2
                
                arg_70[eax_15] = esi_4
                arg2 += 1
            else
                var_4 = nullptr
                void* eax_19 = sub_573400()
                int32_t eax_20 = *(eax_19 + 4)
                uint32_t eax_21 = eax_16
                
                if (eax_21 u>= 0x320)
                    sub_591930()
                    eax_21 = eax_16
                
                eax_15, ecx_12 = sub_582d10(eax_20, *(eax_21 * 0x64 + eax_20 + 0x1a70), 
                    *(eax_19 + 4), esi_4, 0x3ee, 0xb, 0x3ea, 3, *(eax_19 + 0x28), *(eax_19 + 0x2c), 
                    *(eax_19 + 0x30), 0, 1, nullptr, 0, nullptr, var_4)
        int32_t var_1c_5 = ecx_12
        int32_t var_20_2 = 0
        i = sub_568960(eax_15, 0, 0x3ea, 0)
    while (i s< 7)

void* eax_29 = sub_573400()
*(eax_29 + 0xc)
*(eax_29 + 4)
uint32_t result = sub_582eb0(&arg_70, arg2, 0x452, 0xb, 0, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
