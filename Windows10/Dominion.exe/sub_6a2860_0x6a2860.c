// 函数: sub_6a2860
// 地址: 0x6a2860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t** eax = sub_6a1680(arg1[1])
int32_t* eax_1 = arg1[1]
*arg1 = eax
char const* const var_2c
int32_t var_28
char const* const var_24
int32_t* eax_2
char* ecx_1

if (eax_1 != 3)
    if (eax_1 != 0x19)
        if (eax_1 != 5)
            return eax_1
        
        return sub_6d89d0(eax)
    
    sub_6a3220(eax[1])
    sub_69cee0(*eax, eax[3])
    eax_2 = sub_6a6d00(eax[3])
    
    if (eax_2 != 0)
        void* edx_8 = eax[3]
        eax[1] = eax_2
        int32_t* eax_17 = sub_6a4880(eax_2, edx_8)
        *eax = eax_17
        return eax_17
    
    var_24 = "ParticleMakeDatalessFailureAsset"
    var_28 = 0xac0
    var_2c = "C:\x\ax2017\Engine\Particle.cpp"
    ecx_1 = "pParseTree"
else
    eax_2 = _aligned_malloc(0x50, 0x10)
    
    if (eax_2 != 0)
        sub_69ca80(eax_2, data_17774e8)
        *eax_2 = 0x20
        eax_2[1] = 0x20
        eax_2[4] = 1
        eax_2[5] = 8
        eax_2[6] = 1
        eax_2[7] = 0
        eax_2[0xf] = 1
        int32_t eax_3 = sub_6a9600(0x20, 1)
        uint32_t edi_1 = sub_6a9570(0x20, 1) * eax_3
        int128_t* eax_5 = sub_687730(0x10)
        *eax_5 = zx.o(0)
        eax_2[0x12] = eax_5
        *eax_5 = edi_1
        *(eax_2[0x12] + 8) = sub_687730(edi_1)
        int32_t* esi_3 = *(eax_2[0x12] + 8)
        int32_t i = 0
        int32_t i_1 = 0
        
        if (eax_2[1] s> 0)
            do
                int32_t j = 0
                
                if (*eax_2 s> 0)
                    int32_t eax_8
                    int32_t edx_2
                    edx_2:eax_8 = sx.q(i)
                    
                    do
                        int32_t eax_10
                        int32_t edx_4
                        edx_4:eax_10 = sx.q(j)
                        int32_t eax_14 = 0xffff00ff
                        
                        if (((((eax_10 + (edx_4 & 3)) s>> 2).b + (((edx_2 & 3) + eax_8) s>> 2).b)
                                & 1) != 0)
                            eax_14 = 0xff00ff00
                        
                        j += 1
                        *esi_3 = eax_14
                        esi_3 = &esi_3[1]
                    while (j s< *eax_2)
                    
                    i = i_1
                
                i += 1
                i_1 = i
            while (i s< eax_2[1])
        
        int32_t* eax_16 = *eax
        *eax_16 = eax_2
        return eax_16
    
    var_24 = "XMalloc"
    var_28 = 0x57
    var_2c = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_1 = "pBuffer"

sub_63b870(eax_2, &data_801800, ecx_1, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
