// 函数: sub_688f10
// 地址: 0x688f10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147abf4
char const* const var_18
int32_t var_14
char const* const var_10
char* ecx_1

if (eax != 0)
    if (*(eax + 0x4c) != 0)
        int32_t* edi_1 = *(eax + 0x48)
        void* ecx_2 = edi_1[2]
        *(eax + 0x48) = ecx_2
        
        if (ecx_2 == 0)
            *(eax + 0x44) = 0
        else
            *(ecx_2 + 4) = 0
        
        void* esi_1 = *edi_1
        *(eax + 0x4c) -= 1
        sub_64c080(edi_1, 0xc)
        __builtin_memset(esi_1 + 0xfde8, 0, 0x14)
        return esi_1
    
    eax = _aligned_malloc(0xfe20, 0x10)
    
    if (eax != 0)
        __builtin_memset(eax + 0xfde8, 0, 0x14)
        return eax
    
    var_10 = "XMalloc"
    var_14 = 0x57
    var_18 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_1 = "pBuffer"
else
    var_10 = "NetBufferAlloc"
    var_14 = 0xff
    var_18 = "C:\x\ax2017\Engine\Network.cpp"
    ecx_1 = "gNetwork"

sub_63b870(eax, &data_801800, ecx_1, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
