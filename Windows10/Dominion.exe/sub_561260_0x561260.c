// 函数: sub_561260
// 地址: 0x561260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edi = zx.d(sub_56b800())
int32_t ebx = *(*(sub_573400() + 4) + 0x19cc)
void* eax_3 = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t esi = edi * 0x64

if (*(esi + eax_3 + 0x1a70) == ebx)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (edi u>= 0x320)
        sub_591930()
    
    if (*(esi + ebx_1 + 0x1a50) == 0x3e9)
        void* eax_4 = sub_573400()
        int32_t i = 0
        void* ecx_2 = *(eax_4 + 0xc) * 0x5a30 + *(eax_4 + 4)
        
        if (*(ecx_2 + 0x1754c) s> 0)
            void* ebx_2 = ecx_2 + 0x1a778
            
            do
                uint32_t esi_2 = zx.d((*ebx_2).w)
                void* ecx_3 = *(sub_573400() + 4)
                
                if (esi_2 u>= 0x320)
                    sub_591930()
                
                int32_t eax_6 = esi_2 * 0x64
                
                if (sub_5754f0(eax_6, *(eax_6 + ecx_3 + 0x1a4c), ecx_3, 8, 0).b != 0)
                    goto label_56134b
                
                i += 1
                ebx_2 += 4
            while (i s< *(ecx_2 + 0x1754c))
        
        eax_4.b = 1
        return eax_4

label_56134b:
eax_3.b = 0
return eax_3
