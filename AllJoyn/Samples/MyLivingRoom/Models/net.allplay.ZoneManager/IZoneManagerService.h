//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace net { namespace allplay { namespace ZoneManager {

public interface class IZoneManagerService
{
public:
    // Implement this function to handle calls to the CreateZone method.
    Windows::Foundation::IAsyncOperation<ZoneManagerCreateZoneResult^>^ CreateZoneAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberSlaves);

    // Implement this function to handle calls to the SetZoneLead method.
    Windows::Foundation::IAsyncOperation<ZoneManagerSetZoneLeadResult^>^ SetZoneLeadAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberZoneId, _In_ Platform::String^ interfaceMemberTimeServerIp, _In_ uint16 interfaceMemberTimeServerPort);

    // Implement this function to handle requests for the value of the Enabled property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<ZoneManagerGetEnabledResult^>^ GetEnabledAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the Version property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<ZoneManagerGetVersionResult^>^ GetVersionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

};

} } } 
