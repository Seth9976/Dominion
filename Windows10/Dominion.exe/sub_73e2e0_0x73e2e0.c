// 函数: sub_73e2e0
// 地址: 0x73e2e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_73e1a0()
int32_t eax = DragAcceptFiles(data_147b084, 1)
data_147df90 = arg1
data_147ef94 = 0

if (arg1[1] != 0x20)
    sub_63b870(eax, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
        "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(sub_5af880(arg1) + 8)
data_14ff3b4 = data_bf21e8
data_14ff3a0 = eax_2
int128_t xmm0_1 = data_bf21f8
data_14ff3ac = 0x3e19999a
data_14ff3b0 = 0x43480000
data_14ff3c4 = xmm0_1
uint16_t ebp
int32_t xmm0_2 = sub_4acb60(ebp, 0.52359879f)
void* eax_3 = data_cf65b8
data_14ff3a4 = xmm0_2
data_14ff3a8 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x18))) / _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
data_14ff3dc = *(sub_6d1290() + 0x4cc)
void* eax_6
char* ecx_1
eax_6, ecx_1 = sub_6d1290()
ecx_1.b = 0
data_14ff3e4 = *(eax_6 + 0x4cc)
return sub_744790(ecx_1) __tailcall
