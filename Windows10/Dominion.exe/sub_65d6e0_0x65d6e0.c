// 函数: sub_65d6e0
// 地址: 0x65d6e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_1 = sub_64e7a0(arg1)
*(eax_1 + 0x1600)
uint32_t eax_2 = sub_654960()
int32_t var_28
char* ecx_1

if (1000000f f> __andps_xmmxud_memxud(*(eax_1 + 0x1634), data_8937a0.o))
    int32_t eax_3 = data_c23be0
    
    if (eax_3 != 0)
        uint32_t ecx_2 = zx.d(eax_3.w)
        
        if (ecx_2 u< data_c23bac)
            void* ecx_4 = ecx_2 * 0x18d0 + data_c23ba8
            
            if (*(ecx_4 + 0x18c8) == eax_3 && ecx_4 != 0)
                sub_65bf00(ecx_4)
    
    int32_t eax_4 = *(eax_1 + 0x16f4)
    int32_t* ecx_5 = *(eax_1 + 0x16f0)
    *(eax_1 + 0x16d8) = eax_4
    *(eax_1 + 0x16d4) = ecx_5
    *(eax_1 + 0x16e8) = eax_1
    int32_t eax_8 = eax_4 * 0x1c s/ 0x1c
    sub_680320(eax_8, &ecx_5[eax_4 * 7], ecx_5, eax_8, 0.d)
    eax_2 = sub_65bdd0(*(eax_1 + 0x16f0), *(eax_1 + 0x16f4))
    *(eax_1 + 0x16e4) = eax_2
    
    if (*(eax_1 + 0x15f8) != 2)
        int32_t eax_9 = *(eax_1 + 0x189c)
        int32_t i = 0
        char var_14_1
        var_14_1.d = eax_9
        
        if (eax_9 != 0)
            do
                int32_t ecx_7 = *(eax_1 + (i << 2) + 0x179c)
                int32_t* eax_10 = sub_64e7a0(ecx_7)
                int32_t var_24_2 = ecx_7
                sub_65d0f0(eax_10, eax_1, eax_10, arg2, eax_1 + 0x1620)
                i += 1
            while (i != var_14_1.d)
        
        int32_t eax_11 = *(eax_1 + 0x15e8)
        *(eax_1 + 0xc) += 1
        *(eax_1 + 0x15f0) = eax_11
        bool cond:0 = *(eax_1 + 0x13c0) == 0
        void* eax_12 = *(eax_1 + 0x16e8)
        *(eax_1 + 0x16f4) = 0
        uint32_t result = *(eax_12 + 0xc)
        *(eax_1 + 0xc) = result
        
        if (not(cond:0))
            *(eax_1 + 0x13c0) = 0
            result = sub_67cf00(arg1)
        
        *(eax_1 + 4) = 1
        return result
    
    char const* const var_24_3 = "UI2UpdateRoot"
    var_28 = 0x27be
    ecx_1 = "ui.type != UI_TABLE"
else
    char const* const var_24 = "UI2UpdateRoot"
    var_28 = 0x27a6
    ecx_1 = "Abs(ui.worldInfo.transform.t.x) < 1000000.0f"

sub_63b870(eax_2, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_28, "UI2UpdateRoot")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
