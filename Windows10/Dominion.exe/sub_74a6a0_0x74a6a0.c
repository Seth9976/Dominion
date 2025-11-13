// 函数: sub_74a6a0
// 地址: 0x74a6a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
HMENU hMenu_1 = CreatePopupMenu()
POINT point
GetCursorPos(&point)
char eax = sub_74a620()
char eax_1 = sub_74a660()
HMENU eax_2 = CreatePopupMenu()
InsertMenuA(eax_2, 0xffffffff, zx.d(eax) << 3 | 0x400, 0x16, "Lock")
InsertMenuA(eax_2, 0xffffffff, zx.d(eax_1) << 3 | 0x400, 0x17, "Hide")
HMENU eax_6 = CreatePopupMenu()
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0xa, "Left")
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0xb, &data_873798)
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0xc, "Right")
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0xd, "Bottom")
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0xe, "Center Vertically")
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0xf, "Center Horizontally")
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0x10, "Center")
InsertMenuA(eax_6, 0xffffffff, 0xc00, 0, &data_801800)
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0x12, "Move Forward\tCtrl-]")
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0x13, "Move Back\tCtrl-[")
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0x14, "To Front\tCtrl-Shift-]")
InsertMenuA(eax_6, 0xffffffff, MF_BYPOSITION, 0x15, "To Back\tCtrl-Shift-[")
HMENU eax_7 = CreatePopupMenu()
InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
HMENU hMenu = hMenu_1
InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Layer")
InsertMenuA(hMenu, 0xffffffff, 0x410, eax_6, "Align")
InsertMenuA(hMenu, 0xffffffff, 0x410, eax_7, "Transform")
BOOL eax_8
int32_t ecx_3
eax_8, ecx_3 = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_147b084, nullptr)
char* ecx_11
int32_t ecx_15

switch (eax_8)
    case 0
        goto label_74ab19
    case 0xa
        int32_t eax_9 = data_151345c
        
        if (eax_9 != 0)
            float var_1c_1
            
            if (eax_9 != 1)
                void* eax_10
                eax_10, ecx_3 = sub_744f10(data_151245c, nullptr)
                int32_t esi = 1
                eax_9 = data_151345c
                var_1c_1 = *(eax_10 + 0x10)
                
                if (eax_9 s> 1)
                    do
                        void* eax_11
                        eax_11, ecx_3 = sub_744f10((&data_151245c)[esi], nullptr)
                        esi += 1
                        float xmm0_3 = __minss_xmmss_memss(*(eax_11 + 0x10), var_1c_1)
                        eax_9 = data_151345c
                        var_1c_1 = xmm0_3
                    while (esi s< eax_9)
            else
                var_1c_1 = 0f
            
            int32_t i = 0
            
            if (eax_9 s> 0)
                do
                    void* eax_12 = sub_744f10((&data_151245c)[i], nullptr)
                    float xmm5_1 = *(eax_12 + 0x10)
                    float xmm0_5 = var_1c_1 - xmm5_1
                    float xmm4_2 = *(eax_12 + 0x14) + 0f
                    float xmm5_2 = xmm5_1 + xmm0_5
                    float xmm3_2
                    
                    if (0f <= xmm5_2)
                        xmm3_2 = xmm5_2 + 0.5f
                    else
                        xmm3_2 = xmm5_2 - 0.5f
                    
                    float xmm3_4
                    
                    if (0f <= xmm4_2)
                        xmm3_4 = xmm4_2 + 0.5f
                    else
                        xmm3_4 = xmm4_2 - 0.5f
                    
                    float xmm0_7 = xmm0_5 f+ *(eax_12 + 0x18) - xmm5_2
                    float xmm1_3 = *(eax_12 + 0x1c) + 0f - xmm4_2
                    float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_4)))
                    float xmm0_8
                    
                    if (0f <= xmm0_7)
                        xmm0_8 = xmm0_7 + 0.5f
                    else
                        xmm0_8 = xmm0_7 - 0.5f
                    
                    float xmm3_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_8)))
                    float xmm1_4
                    
                    if (0f <= xmm1_3)
                        xmm1_4 = xmm1_3 + 0.5f
                    else
                        xmm1_4 = xmm1_3 - 0.5f
                    
                    i += 1
                    float xmm1_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_2)))
                    float var_3c_1 = xmm7_2
                    float var_38_1 = xmm3_6 + xmm1_6
                    float var_34_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_4))) + xmm7_2
                    *(eax_12 + 0x10) = xmm1_6.o
                while (i s< data_151345c)
            
            ecx_3.b = 1
            sub_744ce0(ecx_3)
            hMenu = hMenu_1
        
        goto label_74ab19
    case 0xb
        sub_749930()
    label_74ab19:
        DestroyMenu(hMenu)
        DestroyMenu(eax_6)
        DestroyMenu(eax_7)
        return DestroyMenu(eax_2)
    case 0xc
        sub_749770()
        goto label_74ab19
    case 0xd
        sub_749ae0()
        goto label_74ab19
    case 0xe
        sub_749e80()
        char* ecx_9
        ecx_9.b = 1
        sub_744ce0(ecx_9)
        goto label_74ab19
    case 0xf
        goto label_74aa2f
    case 0x10
        sub_749e80()
    label_74aa2f:
        sub_749ca0()
        char* ecx_10
        ecx_10.b = 1
        sub_744ce0(ecx_10)
        goto label_74ab19
    case 0x11
        sub_74a060()
        goto label_74ab19
    case 0x12
        sub_7486f0()
        goto label_74ab19
    case 0x13
        sub_748780()
        goto label_74ab19
    case 0x14
        if (data_151345c == 0)
            goto label_74ab19
        
        ecx_15 = 0xffffffff
    label_74aaf6:
        sub_74ae80(ecx_15)
        char* ecx_16
        ecx_16.b = 1
        sub_744ce0(ecx_16)
        sub_6f6e30(data_1512450)
        sub_74ac70()
        goto label_74ab19
    case 0x15
        if (data_151345c == 0)
            goto label_74ab19
        
        ecx_15 = 0
        goto label_74aaf6
    case 0x16
        char eax_14
        eax_14, ecx_11 = sub_74a620()
        int32_t i_1 = 0
        
        if (data_151345c s> 0)
            do
                void* eax_15
                eax_15, ecx_11 = sub_744f10((&data_151245c)[i_1], nullptr)
                ecx_11.b = eax_14 ^ 1
                i_1 += 1
                *(eax_15 + 0x45) = ecx_11.b
            while (i_1 s< data_151345c)
        
    label_74aa7d:
        ecx_11.b = 1
        sub_744ce0(ecx_11)
        sub_6f6e30(data_1512450)
        sub_74ac70()
        hMenu = hMenu_1
        goto label_74ab19
    case 0x17
        char eax_16
        eax_16, ecx_11 = sub_74a660()
        int32_t i_2 = 0
        
        if (data_151345c s> 0)
            do
                void* eax_17
                eax_17, ecx_11 = sub_744f10((&data_151245c)[i_2], nullptr)
                ecx_11.b = eax_16 ^ 1
                i_2 += 1
                *(eax_17 + 0x44) = ecx_11.b
            while (i_2 s< data_151345c)
        
        goto label_74aa7d

sub_63b870(eax_8, &data_801800, "Halt", "C:\x\ax2017\Engine\Editor\UIEditor.cpp", 0x8ed, 
    "DoRClickMenu")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
