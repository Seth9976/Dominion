// 函数: sub_4b40b0
// 地址: 0x4b40b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = data_cc8d5c
int32_t var_10 = arg1
uint32_t eax

if (edi != 0)
    if (*(edi + 0x18) == 3)
        int32_t ecx = *(edi + 0x14)
        void* edx = data_147abf4
        
        if (ecx != 0)
            eax = zx.d(ecx.w)
            
            if (eax u< *(edx + 4))
                eax = eax * 0x64 + *edx
                
                if (*(eax + 0x60) == ecx && eax != 0)
                    int32_t var_24_1 = 0xf42a9
                    sub_689e00(eax, 8, eax + 0x50)
                    eax = sub_689be0(&var_10, 8, eax + 0x50, &var_10)
                    edi = data_cc8d5c
    
    if (edi != 0)
        void* eax_3 = sub_4b3f20(arg1)
        void* ebx_1 = eax_3
        
        if (ebx_1 != 0xffffffff)
            eax_3 = sub_4b4000()
            
            if (arg2 == 3 || arg2 == 5)
                *(edi + 0x5028) -= 1
                void* esi_4 = (*(edi + 0x5028) << 5) + edi
                int32_t ebx_5 = ebx_1 << 5
                *(ebx_5 + edi + 0x28) = *(esi_4 + 0x28)
                *(ebx_5 + edi + 0x2c) = *(esi_4 + 0x2c)
                sub_63d850(ebx_5 + 0x30 + edi, esi_4 + 0x30)
                *(ebx_5 + edi + 0x34) = *(esi_4 + 0x34)
                *(ebx_5 + edi + 0x38) = *(esi_4 + 0x38)
                eax_3 = *(esi_4 + 0x40)
                int32_t ecx_12 = *(esi_4 + 0x44)
                *(ebx_5 + edi + 0x40) = eax_3
                *(ebx_5 + edi + 0x44) = ecx_12
            else
                if (arg2 == 2)
                    int32_t ebx_2 = ebx_1 << 5
                    *(ebx_2 + edi + 0x28) = 0xffffffff
                    int32_t ecx_4 = *(eax_3 + 0x18)
                    int32_t eax_4 = *(eax_3 + 0x1c)
                    *(ebx_2 + edi + 0x40) = ecx_4 + 1
                    int32_t eax_5 = adc.d(eax_4, 0, ecx_4 u>= 0xffffffff)
                    *(ebx_2 + edi + 0x38) = 4
                    *(ebx_2 + edi + 0x44) = eax_5
                    *(edi + 0x502c) = 0
                    return eax_5
                
                if (arg2 == 1)
                    int32_t ebx_3 = ebx_1 << 5
                    *(ebx_3 + edi + 0x28) = 0xffffffff
                    int32_t ecx_6 = *(eax_3 + 0x18)
                    int32_t eax_6 = *(eax_3 + 0x1c)
                    *(ebx_3 + edi + 0x40) = ecx_6 + arg2
                    int32_t eax_7 = adc.d(eax_6, 0, ecx_6 + arg2 u< ecx_6)
                    *(ebx_3 + edi + 0x38) = arg2
                    *(ebx_3 + edi + 0x44) = eax_7
                    *(edi + 0x502c) = 0
                    return eax_7
                
                if (arg2 == 4)
                    int32_t ebx_4 = ebx_1 << 5
                    *(ebx_4 + edi + 0x28) = 0xffffffff
                    int32_t ecx_8 = *(eax_3 + 0x18)
                    int32_t eax_8 = *(eax_3 + 0x1c)
                    *(ebx_4 + edi + 0x40) = ecx_8 + 1
                    int32_t eax_9 = adc.d(eax_8, 0, ecx_8 u>= 0xffffffff)
                    *(ebx_4 + edi + 0x38) = 5
                    *(ebx_4 + edi + 0x44) = eax_9
                    *(edi + 0x502c) = 0
                    return eax_9
            
            *(edi + 0x502c) = 0
        
        return eax_3

sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
