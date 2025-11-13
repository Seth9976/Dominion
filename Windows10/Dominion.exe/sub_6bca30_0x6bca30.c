// 函数: sub_6bca30
// 地址: 0x6bca30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147abe8

if (eax == 0)
    sub_63b870(eax, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = *(eax + 0x10)
*(eax_1 + 0x1c) += 1
float xmm0_1 = arg2 f+ *(arg1 + 0x5c)
*(arg1 + 0x54) += 1
*(arg1 + 0x58) = arg2
*(arg1 + 0x5c) = xmm0_1
float xmm0_2 = *(arg1 + 0x50)

if (not(xmm0_2 f<= 0))
    float xmm0_3 = xmm0_2 - arg2
    *(arg1 + 0x50) = xmm0_3
    
    if (not(0f < xmm0_3))
        *(arg1 + 0x76) = 1

float* i = *(arg1 + 8)

while (i != 0)
    int32_t* eax_2 = &i[0xbf]
    int32_t* i_1 = i
    float* i_2 = i
    i = *eax_2
    
    if (sub_6bc970(i_2) == 0)
        void* esi = nullptr
        
        while (true)
            if (esi != 0)
                esi = *(esi + 0x2fc)
            else
                esi = i_2[0xb4]
            
            if (esi == 0)
                break
            
            sub_6b8400(esi)
        
        sub_6c3440(&i_2[0xb4])
        void* eax_4 = i_2[0xb9]
        *(eax_4 + 0x14) -= 1
        void* ecx_3 = i_1[0xc0]
        int32_t eax_5 = *eax_2
        
        if (ecx_3 == 0)
            *(arg1 + 8) = eax_5
        else
            *(ecx_3 + 0x2fc) = eax_5
        
        void* ecx_4 = *eax_2
        int32_t eax_6 = i_1[0xc0]
        
        if (ecx_4 == 0)
            *(arg1 + 0xc) = eax_6
        else
            *(ecx_4 + 0x300) = eax_6
        
        *(arg1 + 0x10) -= 1
        boost::exception::~exception(i_1)
        sub_64c080(i_1, 0x304)

if (*(arg1 + 0x10) == 0)
    *(arg1 + 0x76) = 1

int32_t result = *(arg1 + 0x48)
*(arg1 + 0x68) = *(arg1 + 0x40)
*(arg1 + 0x70) = result
return result
