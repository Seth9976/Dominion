// 函数: sub_6936c0
// 地址: 0x6936c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *arg1

if (eax == 0)
    return sub_693450(eax, &(*U"$%&'()*")[7], arg1, 0xe, arg2)

if (eax == 1)
    return sub_693450(eax - 1, 0x878780, arg1, 0x15, arg2)

void* eax_3 = eax - 2
int32_t var_24
char const* const var_20
char* ecx

if (eax == 2)
    int32_t edi_1 = arg1[2]
    void* ecx_1 = arg2 + 8
    int32_t var_8_1 = edi_1
    wchar32 const* const esi_1 = U"$%&'()*"
    
    while (true)
        wchar32 const edx = *esi_1
        *(ecx_1 - 8) = edx
        *(ecx_1 - 4) = edi_1
        
        if (edx s< 0x24)
            var_20 = "ClickStateAllocHand"
            var_24 = 0xb7
            ecx = "ButtonSourceIsHanded(source)"
            break
        
        eax_3 = (edx - 0x24) * 0x32c
        
        if (edi_1 != 0)
            eax_3 = eax_3 + 0x8b9c + arg1
            *ecx_1 = eax_3
            
            if (edx - 0x24 u> 6)
                var_20 = "ClickStateAllocHand"
                var_24 = 0xd5
                ecx = "Halt"
                break
            
            switch (edx)
                case 0x24
                    *eax_3 = "rh oc touch a"
                case 0x25
                    *eax_3 = "rh oc touch b"
                case 0x26
                    *eax_3 = "rh oc touch trigger"
                case 0x27
                    *eax_3 = "rh vive trigger"
                case 0x28
                    *eax_3 = "rh vive grip"
                case 0x29
                    *eax_3 = "rh vive trackpad"
                case 0x2a
                    *eax_3 = "rh vive menu"
        else
            void* edi_3 = &arg1[0x1c8f] + eax_3
            *ecx_1 = edi_3
            
            if (edx - 0x24 u> 6)
                var_20 = "ClickStateAllocHand"
                var_24 = 0xc7
                ecx = "Halt"
                break
            
            switch (edx)
                case 0x24
                    *edi_3 = "lh oc touch a"
                    edi_1 = var_8_1
                case 0x25
                    *edi_3 = "lh oc touch b"
                    edi_1 = var_8_1
                case 0x26
                    *edi_3 = "lh oc touch trigger"
                    edi_1 = var_8_1
                case 0x27
                    *edi_3 = "lh vive trigger"
                    edi_1 = var_8_1
                case 0x28
                    *edi_3 = "lh vive grip"
                    edi_1 = var_8_1
                case 0x29
                    *edi_3 = "lh vive trackpad"
                    edi_1 = var_8_1
                case 0x2a
                    *edi_3 = "lh vive menu"
                    edi_1 = var_8_1
        
        esi_1 = &esi_1[1]
        ecx_1 += 0xc
        
        if (esi_1 s>= &(*U"$%&'()*")[7])
            return sub_693450(arg2 + 0x54, 0x878764, arg1, 6, arg2 + 0x54) + 7
else
    var_20 = "ControllerGetClickState"
    var_24 = 0x14c
    ecx = "Halt"

sub_63b870(eax_3, &data_801800, ecx, "C:\x\ax2017\Engine\Controller.cpp", var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
