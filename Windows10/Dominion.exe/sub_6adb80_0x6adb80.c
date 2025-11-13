// 函数: sub_6adb80
// 地址: 0x6adb80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_147b06c
int32_t eax = *(ecx + 0x2cc)
int32_t var_c
char const* const var_8
char* ecx_1

if (eax s> 0)
    *(ecx + 0x2cc) = eax - 1
    
    if (eax != 1)
        void* ecx_4 = ecx + (eax - 1) * 0x14
        eax = *(ecx_4 + 0x18c)
        
        if (eax != 2)
            if (eax == 1)
                return sub_6ad680(*(ecx_4 + 0x190))
            
            var_8 = "RendererPopRT"
            var_c = 0x39f
            ecx_1 = "Halt"
        else
            if (*(ecx_4 + 0x194) != 0)
                uint32_t eax_9 = zx.d(*(ecx_4 + 0x19c))
                return sub_6ad5d0(eax_9, *(ecx_4 + 0x198), *(ecx_4 + 0x194), eax_9.b)
            
            var_8 = "RendererPopRT"
            var_c = 0x396
            ecx_1 = "rt.texColor"
    else
        if (data_147abb4 == 5)
            return sub_6e1520(0)
        
        int32_t eax_2 = *(ecx + 0x170)
        *(ecx + 0x2cc) = 0
        
        if (eax_2 == 1)
            return sub_6ad680(*(ecx + 0x174))
        
        eax = eax_2 - 2
        
        if (eax_2 == 2)
            uint32_t eax_4 = zx.d(*(ecx + 0x188))
            return sub_6ad5d0(eax_4, *(ecx + 0x184), *(ecx + 0x180), eax_4.b)
        
        var_8 = "RendererRestoreMainRT"
        var_c = 0x372
        ecx_1 = "Halt"
else
    var_8 = "RendererPopRT"
    var_c = 0x382
    ecx_1 = "gpRenderAppData->renderTargetStackDepth > 0"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Renderer.cpp", var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
