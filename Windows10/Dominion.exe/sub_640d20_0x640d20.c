// 函数: sub_640d20
// 地址: 0x640d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int32_t var_20
int32_t eax
char const* const ecx

if (*(arg2 + 0x20) == 2)
    eax = *(arg2 + 0x14)
    
    if (eax == 0)
        eax = *(arg2 + 0x18)
        
        if (eax == 0)
            eax = *(arg2 + 0x1c)
            
            if (eax == 0)
                sub_640c40(arg1, *(arg2 + 0x30))
                sub_640c40(arg1, *(arg2 + 0x2c))
                void* esi_1 = arg2 + 0x34
                int32_t i_1 = 4
                int32_t result
                int32_t i
                
                do
                    result = sub_640c40(arg1, *esi_1)
                    esi_1 += 4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                *(arg2 + 0x20) = i_1
                return result
    
    char const* const var_1c_4 = "RegionAllocator::DeallocChildren"
    var_20 = 0xd4
    ecx = "r.key == TTFKEY_NULL"
else
    char const* const var_1c = "RegionAllocator::DeallocChildren"
    var_20 = 0xd3
    ecx = "r.alloc == ALLOC_CHILDREN"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\TTFont.cpp", var_20, 
    "RegionAllocator::DeallocChildren")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
