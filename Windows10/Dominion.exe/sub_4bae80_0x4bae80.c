// 函数: sub_4bae80
// 地址: 0x4bae80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = nullptr
int32_t result

while (true)
    if (esi != 0)
        esi += 0x1330
    else
        esi = *arg1
    
    result = *arg1 + arg1[1] * 0x1330
    
    if (esi u>= result)
        break
    
    while ((*(esi + 0x1328) & 0xffff0000) == 0)
        esi += 0x1330
        
        if (esi u>= result)
            arg1[3] = 0
            arg1[1] = 0
            return result
    
    Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(esi + 0x10)
    int32_t ecx_2 = arg1[3]
    arg1[3] = zx.d(*(esi + 0x1328))
    *(esi + 0x1328) = ecx_2
    arg1[4] -= 1

arg1[1] = 0
arg1[3] = 0
return result
