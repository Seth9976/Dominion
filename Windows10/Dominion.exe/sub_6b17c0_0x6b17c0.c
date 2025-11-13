// 函数: sub_6b17c0
// 地址: 0x6b17c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
int64_t var_14 = 0
int32_t edx = esi[6]
int32_t var_c = 0

if (edx != 0)
    int32_t* eax_1 = *(data_147b078 + 8)
    arg1 = (*(*eax_1 + 0x38))(eax_1, edx, 0, 4, 0, &var_14)

int32_t var_28_1
char const* const ecx_1

if (edx == 0 || arg1 s>= 0)
    int32_t i = 0
    
    if (*(arg2 + 4) s> 0)
        void* esi_1 = arg2 + 8
        
        do
            int32_t ecx_3
            arg1, ecx_3 = sub_6b0df0(arg1, arg5, esi_1, var_14.d)
            
            if (arg1.b == 0)
                int32_t var_24_4 = ecx_3
                arg1 = sub_6b1510(arg4, esi_1, arg3, *arg4)
            
            i += 1
            esi_1 += 0x14
        while (i s< *(arg2 + 4))
        
        esi = arg4
    
    int32_t edx_3 = esi[6]
    
    if (edx_3 == 0)
        return 
    
    int32_t* eax_4 = *(data_147b078 + 8)
    (*(*eax_4 + 0x3c))(eax_4, edx_3, 0)
    arg1 = *esi
    
    if (arg1 == 3)
        int32_t* eax_6 = *(data_147b078 + 8)
        (*(*eax_6 + 0x1c))(eax_6, 0, 1, &esi[6])
        return 
    
    if (arg1 == 4)
        int32_t* eax_8 = *(data_147b078 + 8)
        (*(*eax_8 + 0x40))(eax_8, 0, 1, &esi[6])
        return 
    
    char const* const var_24_7 = "Dx11SetRenderState"
    var_28_1 = 0x854
    ecx_1 = "Halt"
else
    char const* const var_24_2 = "Dx11SetRenderState"
    var_28_1 = 0x837
    ecx_1 = "SUCCEEDED(hr)"

sub_63b870(arg1, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_28_1, 
    "Dx11SetRenderState")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
