// 函数: sub_4dcf80
// 地址: 0x4dcf80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1

if (data_1597db8 != 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "mNodeBuckets == NULL", "C:\x\ax2017\Engine\xMap.h", 0x74, 
        "XMap<struct XStringSpan,enum DomCardEnum>::SetNumBuckets")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

data_1597db8 = sub_64c020(0x1000)
data_1597dbc = 0x3ff
sub_4e9e00(&data_1597dc4, 0x1002)

for (int128_t* const i = &data_77fea0; i != &data_77fee8; i += 4)
    int32_t j_1 = sub_571770(*i, &var_c)
    
    if (j_1 s> 0)
        void* esi_2 = var_c + 0x58
        int32_t j
        
        do
            sub_4dcd80(esi_2 - 0x58, *(esi_2 + 0x34), *esi_2, esi_2 - 0x58)
            esi_2 += 0x698
            j = j_1
            j_1 -= 1
        while (j != 1)

int32_t* eax_5

for (char const (** i_1)[0x6] = &data_92e438; i_1 s< &data_931260; i_1 = &i_1[0x1a6])
    eax_5 = sub_4dcd80(&i_1[-0x16], i_1[0xd], *i_1, &i_1[-0x16])

return sub_4dcd80(eax_5, 0x318, "harem", nullptr)
