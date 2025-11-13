// 函数: sub_63b9ab
// 地址: 0x63b9ab
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esp_3 = arg1[-6]
arg1[-1] = 0xfffffffe
int32_t edi = data_cf64ac
int32_t esp_5

if (edi != 0)
label_63b9f1:
    data_cf64ac = edi
    *(esp_3 - 4) = edi
    *(esp_3 - 8) = 1
    *(esp_3 - 0xc) = 8
    *(esp_3 - 0x10) = "\nStack:\n"
    
    if (fwrite() != 1)
        *(esp_3 - 4) = "Failed to write to log file\n"
        OutputDebugStringA()
    
    *(esp_3 - 4) = edi
    fflush()
    esp_5 = esp_3
else
    sub_69db50(&data_cf64b0)
    *(esp_3 - 4) = &data_871b58
    *(esp_3 - 8) = &data_cf64b0
    edi = fopen()
    
    if (edi != 0)
        goto label_63b9f1
    
    *(esp_3 - 4) = "Failed to open log file\n"
    OutputDebugStringA()
    esp_5 = esp_3

*(esp_5 - 4) = 0
*(esp_5 - 8) = &arg1[-0x210]
*(esp_5 - 0xc) = 8
*(esp_5 - 0x10) = 2
RtlCaptureStackBackTrace()
arg1[-0x211] = 8
sub_6c6270(&arg1[-0x211])
int32_t eax_4 = data_cf64ac

if (eax_4 != 0)
    *(esp_5 - 4) = eax_4
    fclose()

char const* const edi_1 = "Assertion"
void* eax_5 = data_cf65b8

if (eax_5 != 0)
    edi_1 = *(eax_5 + 0xc)

*(esp_5 - 4) = &arg1[-0x107]
*(esp_5 - 8) = "Oh no! There was an assertion!\n\nThe log.txt file has more information.\n\n%s"
*(esp_5 - 0xc) = 0x400
*(esp_5 - 0x10) = &arg1[-0x207]
sub_63b5d0()
HWND esi = GetForegroundWindow()
*(esp_5 - 4) = &arg1[-0x208]
*(esp_5 - 8) = esi
GetWindowThreadProcessId()
uint32_t eax_10 = GetCurrentProcessId()

if (arg1[-0x208] != eax_10)
    esi = nullptr

*(esp_5 - 4) = 0
*(esp_5 - 8) = edi_1
*(esp_5 - 0xc) = &arg1[-0x207]
*(esp_5 - 0x10) = esi
MessageBoxA()
*(esp_5 - 4) = 0
*(esp_5 - 8) = GetCurrentProcess()
uint32_t result = TerminateProcess()
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*(esp_5 + 4)
*(esp_5 + 8)
*(esp_5 + 0xc)
arg1[-7]
CookieCheckFunction(result)
*arg1
return result
