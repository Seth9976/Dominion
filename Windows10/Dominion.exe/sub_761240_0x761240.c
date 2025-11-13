// 函数: sub_761240
// 地址: 0x761240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* ebx = arg1
void* esi = *ebx

if (esi == 0)
    return 

HANDLE hEvent = *(esi + 0x5c)

if (hEvent != 0)
    SetEvent(hEvent)

HANDLE hEvent_1 = *(esi + 0x58)

if (hEvent_1 != 0)
    SetEvent(hEvent_1)

int32_t* eax_1 = *(esi + 0x68)

if (eax_1 != 0)
    sub_761df0(eax_1)
    sub_761d90(*(esi + 0x68))

HWAVEOUT hwo = *(esi + 0x54)

if (hwo != 0)
    waveOutReset(hwo)
    void* edi_1 = esi + 0xc
    int32_t i_1 = 2
    void* pwh = esi + 0x14
    int32_t i
    
    do
        waveOutUnprepareHeader(*(esi + 0x54), pwh, 0x20)
        int32_t eax_2 = *edi_1
        
        if (eax_2 != 0)
            sub_7597b9(eax_2)
        
        edi_1 += 4
        pwh += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)
    waveOutClose(*(esi + 0x54))
    ebx = arg1

HANDLE hObject = *(esi + 0x5c)

if (hObject != 0)
    CloseHandle(hObject)

HANDLE hObject_1 = *(esi + 0x58)

if (hObject_1 != 0)
    CloseHandle(hObject_1)

sub_75a680(esi)
int32_t var_18_9 = 0x6c
operator new(esi)
*ebx = 0
