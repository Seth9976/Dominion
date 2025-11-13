// 函数: sub_6a8390
// 地址: 0x6a8390
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg1
char* edi = arg2
int32_t* var_8 = eax
char const* const var_28
int32_t var_24
char const* const var_20
char* ecx

if (eax[1] == 0x23)
    eax = sub_5af880(arg1)
    int32_t* edx = eax
    
    if (data_caf77c u< data_caf774)
        eax = data_caf778
        int32_t* ecx_2 = data_caf770
        
        if (eax u<= ecx_2)
            int32_t esi = data_caf76c
            void* eax_1
            
            if (eax != ecx_2)
                ecx_2 = eax
                eax_1 = *(esi + ecx_2 * 0x18 + 0x14)
            else
                eax_1 = ecx_2 + 1
                data_caf770 = eax_1
            
            data_caf778 = eax_1
            void* ebx = ecx_2 * 3
            *(esi + (ebx << 3)) = zx.o(0)
            *(esi + (ebx << 3) + 0x10) = 0
            *(esi + (ebx << 3) + 0x14) = data_caf780 << 0x10 | ecx_2
            int32_t eax_7 = data_caf780 + 1
            data_caf780 = eax_7
            
            if (eax_7 == 0x10000)
                data_caf780 = 1
            
            data_caf77c += 1
            *(esi + (ebx << 3)) = var_8
            int32_t result = *(esi + (ebx << 3) + 0x14)
            
            if (edi == 0)
                void* eax_9 = edx[0xa]
                int32_t* ecx_3 = *(eax_9 + 0x38)
                
                if (ecx_3 != 0)
                    edi = *ecx_3
                else if (*(eax_9 + 0x30) != 0)
                    edi = ***(eax_9 + 0x34)
            
            int32_t* eax_12 = sub_711150(edx[0xc])
            *(esi + (ebx << 3) + 8) = eax_12
            eax_12[3] = sub_6a8350
            *(*(esi + (ebx << 3) + 8) + 0x18) = result
            int32_t* eax_14 = sub_7130f0(edx[0xa])
            *(esi + (ebx << 3) + 4) = eax_14
            
            if (edi != 0)
                int32_t* eax_15 = sub_7100d0(*eax_14, edi)
                
                if (eax_15 != 0)
                    sub_714780(eax_14, eax_15)
            
            return result
        
        var_20 = "DataArray<struct Spine>::DataArrayAlloc"
        var_24 = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        var_20 = "DataArray<struct Spine>::DataArrayAlloc"
        var_24 = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    var_28 = "C:\x\ax2017\Engine\DataArray.h"
else
    var_20 = "SpineDefGet"
    var_24 = 0x1bd
    var_28 = "C:\x\ax2017\Engine\Spine.cpp"
    ecx = "assetPtr->assetType == ASSET_TYPE_SPINE"

sub_63b870(eax, &data_801800, ecx, var_28, var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
