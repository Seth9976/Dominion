// 函数: sub_64be70
// 地址: 0x64be70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg1[2]
int32_t var_10
char const* const ecx_1

if (ecx s> 0)
    int32_t edi_1 = arg1[4]
    
    if (edi_1 u>= 4)
        int32_t* result = sub_687730(ecx * edi_1 + 4)
        *result = arg1[1]
        int32_t i = 0
        int32_t* result_1 = *arg1
        arg1[1] = result
        
        if (arg1[2] s> 0)
            result = &result[1]
            
            do
                *result = result_1
                i += 1
                result_1 = result
                result += edi_1
            while (i s< arg1[2])
        
        *arg1 = result_1
        return result
    
    char const* const var_c_1 = "XAllocator::Grow"
    var_10 = 0x50
    ecx_1 = "mItemSize >= sizeof(void*)"
else
    char const* const var_c = "XAllocator::Grow"
    var_10 = 0x4f
    ecx_1 = "mGrowCount > 0"

int32_t eax
sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\xAlloc.cpp", var_10, "XAllocator::Grow")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
