// 函数: sub_5939a0
// 地址: 0x5939a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* edx = arg1
void* var_8_1 = edx
__builtin_memcpy(edx, arg2, 0x6c)
int32_t eax = *(arg2 + 0x6c)
*(edx + 0x6c) = eax

if (eax s> 0)
    memcpy(edx + 0x70, arg2 + 0x70, *(arg2 + 0x6c) << 2)
    edx = var_8_1

int32_t eax_9 = *(arg2 + 0xd10)
int32_t var_1c_2
char const* const ecx

if (eax_9 s< 4)
    *(edx + 0xd10) = eax_9
    int32_t result = memcpy(edx + 0xcf0, arg2 + 0xcf0, *(arg2 + 0xd10) << 2)
    
    if (*(arg2 + 4) != 3)
        return result
    
    eax_9 = *(arg2 + 0x6c)
    
    if (eax_9 s<= 4)
        return memcpy(var_8_1 + 0xd00, arg2 + 0xd00, eax_9 << 2)
    
    char const* const var_18_5 = "YldCopy"
    var_1c_2 = 0x5263
    ecx = "source.numChoices <= MAX_WHERE_RESULTS"
else
    char const* const var_18_2 = "YldCopy"
    var_1c_2 = 0x525e
    ecx = "source.numWhereOptions < MAX_WHERE_OPTIONS"

sub_63b870(eax_9, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_1c_2, 
    "YldCopy")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
