// 函数: sub_512ef0
// 地址: 0x512ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg1.w)
int32_t eax_1 = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t edi = esi * 0x64
int32_t ecx = *(edi + eax_1 + 0x1a50)
int32_t eax_2 = *(edi + eax_1 + 0x1a54)
uint32_t result = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

if (ecx == *(edi + result + 0x1a58) && eax_2 == *(edi + result + 0x1a5c))
    int32_t eax_5 = *(sub_573400() + 4)
    
    if (esi u>= 0x320)
        sub_591930()
    
    if (*(edi + eax_5 + 0x1a50) == 0x3ea)
        result = sub_567520()
    
    if (*(edi + eax_5 + 0x1a50) != 0x3ea || result.b == 0)
        void* eax_6 = sub_573400()
        void* ebx_1 = *(eax_6 + 4)
        
        if (esi u>= 0x320)
            eax_6 = sub_591930()
        
        if (sub_5754f0(eax_6, *(edi + ebx_1 + 0x1a4c), ebx_1, 0x80, 0).b != 0)
            result.b = 1
            return result
        
        void* eax_7 = sub_573400()
        void* ebx_2 = *(eax_7 + 4)
        
        if (esi u>= 0x320)
            eax_7 = sub_591930()
        
        if (sub_5754f0(eax_7, *(edi + ebx_2 + 0x1a4c), ebx_2, 0x200, 0).b != 0)
            result.b = 1
            return result

result.b = 0
return result
