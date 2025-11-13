// 函数: sub_5ee2a0
// 地址: 0x5ee2a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
void* eax
int32_t edx

if (*(arg1 + 4) == 1 && *(arg1 + 0x10) == 2
        && (*(arg1 + 0x6c) == 0xffffffff || *(arg1 + 0x5c) == 1))
    eax, edx = sub_5cb4f0(0xa, 0)
    
    if (eax.b == 0)
        eax, edx = sub_5cb4f0(0xc, 0)

if (*(arg1 + 4) == 8 && *(arg1 + 0x6c) == 1)
    eax, edx = sub_5cb4f0(0xe, 0)

if (*(arg1 + 4) == 1)
    if (*(arg1 + 0x10) == 3 && *(arg1 + 0x6c) == 1)
        uint32_t edi_2 = zx.d((*(arg1 + 0x70)).w)
        
        if (edi_2 u>= 0x320)
            sub_591930()
        
        eax, edx = sub_5cb4f0(0xb, *(edi_2 * 0x64 + &data_b82524))
        
        if (eax.b == 0)
            uint32_t edi_4 = zx.d((*(arg1 + 0x70)).w)
            
            if (edi_4 u>= 0x320)
                sub_591930()
            
            eax, edx = sub_5cb4f0(4, *(edi_4 * 0x64 + &data_b82524))
    
    if (*(arg1 + 4) == 1)
        if (*(arg1 + 0x10) == 2 && *(arg1 + 0x6c) == 1)
            uint32_t edi_6 = zx.d((*(arg1 + 0x70)).w)
            
            if (edi_6 u>= 0x320)
                edx = sub_591930()
            
            eax = edi_6 * 0x64
            
            if (*(eax + 0xb82528) != 0x3ea)
                uint32_t edi_8 = zx.d((*(arg1 + 0x70)).w)
                
                if (edi_8 u>= 0x320)
                    sub_591930()
                
                eax, edx = sub_5cb4f0(4, *(edi_8 * 0x64 + &data_b82524))
        
        if (*(arg1 + 4) == 1 && *(arg1 + 0x10) == 3 && *(arg1 + 0x6c) == 0)
            eax, edx = sub_5cb4f0(0x1e, 0)

if (*(arg1 + 4) == 5)
    if (*(arg1 + 0x10) == 0x79)
        eax, edx = sub_5cb4f0(0x15, 0)
    
    if (*(arg1 + 4) == 5 && *(arg1 + 0x10) == 6)
        eax, edx = sub_5cb4f0(0x16, 0)

if (*(arg1 + 4) == 4 && *(arg1 + 0x6c) == 1)
    eax, edx = sub_5cb4f0(0x18, *(arg1 + 0x70))

if (*(arg1 + 4) == 6 && *(arg1 + 0x6c) == 1)
    sub_5cb4f0(0x17, sub_5915b0(eax, edx, 0xb80ad8, *(arg1 + 0x70)))

if (*(arg1 + 4) != 1)
    return 

if (*(arg1 + 0x10) == 1 && *(arg1 + 0x6c) == 1 && sub_5cb4f0(0x1c, 0).b == 0)
    uint32_t edi_10 = zx.d((*(arg1 + 0x70)).w)
    
    if (edi_10 u>= 0x320)
        sub_591930()
    
    sub_5cb4f0(9, *(edi_10 * 0x64 + &data_b82524))

if (*(arg1 + 4) != 1)
    return 

if (*(arg1 + 0x10) == 8 && *(arg1 + 0x6c) == 1)
    uint32_t edi_12 = zx.d((*(arg1 + 0x70)).w)
    
    if (edi_12 u>= 0x320)
        sub_591930()
    
    sub_5cb4f0(9, *(edi_12 * 0x64 + &data_b82524))

if (*(arg1 + 4) != 1)
    return 

if (*(arg1 + 0x10) == 2 && *(arg1 + 0x6c) == 1)
    uint32_t edi_14 = zx.d((*(arg1 + 0x70)).w)
    
    if (edi_14 u>= 0x320)
        sub_591930()
    
    sub_5cb4f0(9, *(edi_14 * 0x64 + &data_b82524))

if (*(arg1 + 4) != 1)
    return 

if (*(arg1 + 0x6c) == 1)
    uint32_t edi_16 = zx.d((*(arg1 + 0x70)).w)
    
    if (edi_16 u>= 0x320)
        sub_591930()
    
    sub_5cb4f0(0xd, *(edi_16 * 0x64 + &data_b82524))

if (*(arg1 + 4) != 1)
    return 

if (*(arg1 + 0x10) == 0xe)
    uint32_t esi_2 = zx.d((*(arg1 + 0x70)).w)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    sub_5cb4f0(0x1d, *(esi_2 * 0x64 + &data_b82524))
    return 

sub_5cb4f0(0xf, 0)
