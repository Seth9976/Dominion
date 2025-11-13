// 函数: sub_4d61a0
// 地址: 0x4d61a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8d5c

if (eax == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* esi = arg1 + 0x11b8
int32_t i_1 = 8
int32_t i

do
    int32_t eax_1 = *esi
    
    if (eax_1 != 0)
        _aligned_free(eax_1)
    
    esi = &esi[6]
    i = i_1
    i_1 -= 1
while (i != 1)
Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(arg1 + 0x10)
uint32_t result = zx.d(*(arg1 + 0x1328))
int32_t ecx_1 = *(eax + 0x5088)
*(eax + 0x5088) = result
*(arg1 + 0x1328) = ecx_1
*(eax + 0x508c) -= 1
return result
