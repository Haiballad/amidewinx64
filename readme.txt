Overview
-------------------------------------------------------------------------------
AMIDEWIN (DMIEdit) is a Desktop Management Interface utility with command line
interface. It allows you to modify strings associated with SMBIOS tables on
AMIBIOS host system.

Features
-------------------------------------------------------------------------------
The utility offers you to modify following SMBIOS table:

 * BIOS Information (Type 0)
 * System (Type 1)
 * Base Board (Type 2)
 * Chassis (Type 3)
 * Processor Information (Type 4)
 * OEM String (Type 11)
 * System Configuration Options (Type 12)
 * Portable Battery (Type 22)
 * System Power Supply (Type 39)

Requirements
-------------------------------------------------------------------------------
Supported Operating System
  AMIDEWIN Utility is supported in following operating system:
   * MicrosoftR Windows(R) 2000
   * MicrosoftR Windows(R) NT 4.0
   * MicrosoftR Windows(R) XP/XP64
   * MicrosoftR Windows(R) PE
   * MicrosoftR Windows(R) Vista 32/64
   * MicrosoftR Windows(R) 7 32/64
   * MicrosoftR Windows(R) PE 2.0 x64 (AMIDEWINx64.EXE)
   * MicrosoftR Windows(R) 8 32/64

BIOS Requirements
  System BIOS should have the followings:
   * SMM eModule with ¡§5.004_SmmCore_00¡¨ label or later.
   * SMBIOS eModule with ¡§5.004_SmBios_00¡¨ label or later.
   * Aptio 5 and later.

Operating System Driver Requirements
  Following drivers for different operation system are required by this utility:
   * AMIFLDRV32.SYS Driver for Microsoft(R) WindowsR 32Bit Operating System.
   * AMIFLDRV64.SYS Driver for Microsoft(R) WindowsR 64Bit Operating System.

Getting Started
-------------------------------------------------------------------------------
Installation
  Copies AMIDEWIN.EXE, AMIDEWINx64.EXE (for Microsoft Windows PE 2.0 x64),
AMIFLDRV32.SYS and AMIFLDRV64.SYS to any storage location accessible by the host 
system and then run AMIDEWIN in command prompt. Remember that three files 
MUST be in same directory.

Usage
  AMIDEWIN <Configuration File Name>
   Or
  AMIDEWIN <Command 1>
   Or
  AMIDEWIN [Option 1] [Option 2]¡K..

  Configuration File Name
   The input file includes at least one SMBIOS Table entry. Each SMBIOS table
   entry contains the SMBIOS table type name followed by the strings to be
   edited. User can use a text editor Or use "/DMS" command to create an
   example file. Default file name is "CONFIG.DMS". Following lists the example
   of SMBIOS configuration file:

    [BIOS]
    Version = 4.6.4
    Date = 10/29/2010

    [System]
    Manufacturer = To be filled by O.E.M.
    Product = To be filled by O.E.M.
    Version = To be filled by O.E.M.
    SerialNum = To be filled by O.E.M.
    UUID = 00020003000400050006000700080009
    SKUNum = To be filled by O.E.M.
    Family = To be filled by O.E.M.

    [BaseBoard]
    Manufacturer = AMD Corporation
    Product = Tilapia CRB
    Version = To be filled by O.E.M.
    SerialNum = To be filled by O.E.M.
    AssetTag = To be filled by O.E.M.

    [Chassis]
    Manufacturer = To Be Filled By O.E.M.
    ChassisType = 03
    Version = To Be Filled By O.E.M.
    SerialNum = To Be Filled By O.E.M.
    TagNum = To Be Filled By O.E.M.
    ChassisOEM = 00000000

    [OemString]
    String = To Be Filled By O.E.M.

    [Configuration]
    String = To Be Filled By O.E.M.

  Commands
   * /ALL [Output File Name] Output information to screen Or file.
   * /DMS [Output File Name] Create configuration file. Default file name is
                             "CONFIG.DMS".
   * /DUMP # [#] [#] Read Type # data.
   * /DUMPALL [FileName] Output all SMBIOS data to screen Or file.

  Options
   User can order following commands to select the operation mode for
   read/write strings associated with SMBIOS tables, create configuration file
   ...etc. The valid commands and related format as below:

   Part 0. System (Type 0)
    * /IVN ["String"]    Read/Write BIOS vendor name.
    * /IV  ["String"]    Read/Write BIOS Version.
    * /ID  ["String"]    Read/Write BIOS release date.

   Part 1. System (Type 1)
    * /SM  ["String"]    Read/Write system manufacturer.
    * /SP  ["String"]    Read/Write system product.
    * /SV  ["String"]    Read/Write system version.
    * /SS  ["String"]    Read/Write system serial number.
    * /SU  [16 Bytes]    Read/Write system UUID.
    * /SU  AUTO          Generates system UUID automatically and update Type 1.
    * /SK  ["String"]    Read/Write system SKU number.
    * /SF  ["String"]    Read/Write system family name.

   Part 2-1. Base Board (Type 2)
    * /BM  ["String"]    Read/Write baseboard manufacturer.
    * /BP  ["String"]    Read/Write baseboard product.
    * /BV  ["String"]    Read/Write baseboard version.
    * /BS  ["String"]    Read/Write baseboard serial number.
    * /BT  ["String"]    Read/Write Asset Tag
    * /BLC ["String"]    Read/Write Location in Chassis

   Part 2-2. Base Board (Type 2)
    * /BMH  <handle #> ["String"]    Read/Write baseboard manufacturer.
    * /BPH  <handle #> ["String"]    Read/Write baseboard product.
    * /BVH  <handle #> ["String"]    Read/Write baseboard version.
    * /BSH  <handle #> ["String"]    Read/Write baseboard serial number.
    * /BTH  <handle #> ["String"]    Read/Write Asset Tag
    * /BLCH <handle #> ["String"]    Read/Write Location in Chassis

   Part 3-1. Chassis (Type 3)
    * /CM  ["String"]      Read/Write chassis manufacturer.
    * /CT  [8-Bits value]  Read/Write chassis type.
    * /CV  ["String"]      Read/Write chassis version.
    * /CS  ["String"]      Read/Write chassis serial number.
    * /CA  ["String"]      Read/Write chassis tag.
    * /CO  [32-Bits value] Read/Write chassis OEM-defined value
    * /CSK ["String"] 	   Read/Write chassis SKU Number

   Part 3-2. Chassis (Type 3)
    * /CMH  <handle #> ["String"]      Read/Write chassis manufacturer.
    * /CTH  <handle #> [8-Bits value]  Read/Write chassis type.
    * /CVH  <handle #> ["String"]      Read/Write chassis version.
    * /CSH  <handle #> ["String"]      Read/Write chassis serial number.
    * /CAH  <handle #> ["String"]      Read/Write chassis tag.
    * /COH  <handle #> [32-Bits value] Read/Write chassis OEM-defined value
    * /CSKH <handle #> ["String"]      Read/Write chassis SKU Number

   Part 4. Processor Information (Type 4)
    * /PSN  ["String"]      Read/Write Processor serial number.
    * /PAT  ["String"]      Read/Write Processor asset tag.
    * /PPN  ["String"]      Read/Write Processor part number.

   Part 5. OEM String (Type 11)
    * /OS  [<Number> <"String">]  Read/Write #th OEM string.

   Part 6. OEM String (Type 12)
    * /SCO [<Number> <"String">] Read/Write #th Sys. Configuration Op. string.

   Part 7. Portable Battery (Type 22)
    * /PBL  <handle #> ["String"]      Read/Write Portable Battery Location.
    * /PBM  <handle #> ["String"]      Read/Write Portable Battery Manufacturer.
    * /PBD  <handle #> ["String"]      Read/Write Portable Battery Manufacturer Date.
    * /PBS  <handle #> ["String"]      Read/Write Portable Battery Serial Number.
    * /PBN  <handle #> ["String"]      Read/Write Portable Battery Device Name.
    * /PBCH <handle #> [8-Bits value]      Read/Write Portable Battery Device Chemistry.
    * /PBCA <handle #> [16-Bits value]      Read/Write Portable Battery Design Capacity.
    * /PBV  <handle #> [16-Bits value]      Read/Write Portable Battery Design Voltage.
    * /PBSV <handle #> ["String"]      Read/Write Portable Battery SBDS Version Number.
    * /PBE  <handle #> [8-Bits value]      Read/Write Portable Battery Maxmum Error.
    * /PBSN <handle #> [16-Bits value]      Read/Write Portable Battery SBDS Serial Number.
    * /PBSD <handle #> [16-Bits value]      Read/Write Portable Battery SBDS Manufacturer Date.
    * /PBSC <handle #> ["String"]      Read/Write Portable Battery SBDS Device Chemistry.
    * /PBCM <handle #> [8-Bits value]      Read/Write Portable Battery Design Capacity Multiplier.
    * /PBO  <handle #> [32-Bits value]      Read/Write Portable Battery OEM-Specific.

   Part 8. Power supply (Type 39)
    * /PU <handle #> [8-Bits value]   Read/Write Power supply unit group.
    * /PL <handle #> ["String"] Read/Write Power supply location.
    * /PD <handle #> ["String"] Read/Write Power supply device name.
    * /PM <handle #> ["String"] Read/Write Power supply manufacturer.
    * /PS <handle #> ["String"] Read/Write Power supply serial number.
    * /PT <handle #> ["String"] Read/Write Power supply asset tag number.
    * /PN <handle #> ["String"] Read/Write Power supply model part number.
    * /PR <handle #> ["String"] Read/Write Power supply revision level.
    * /PP <handle #> [16-Bits value]   Read/Write Power supply max power capacity.
    * /PC <handle #> [16-Bits value]   Read/Write Power supply characteristics.
    * /PVH <handle #> [16-Bits value]  Read/Write Power supply voltage probe handle.
    * /PDH <handle #> [16-Bits value]  Read/Write Power supply cooling dev. handle.
    * /PCH <handle #> [16-Bits value]  Read/Write Power supply current probe handle.

  Parameters List
   Name                Description
   ----------------------------------------------------------------------------
   String              NULL-Terminated ASCII string.
   8-Bits value        This parameter MUST be 2-digits hexadecimal value.
   32-Bits value       This parameter MUST be 8-digits hexadecimal value.
   16 Bytes            This parameter MUST be 32-digits hexadecimal value.
   Number              The decimal value ranges between 1 and 127.
   Output File Name    This parameter is used to specify path/filename of the
                       output file with extension.

  Rules
   * Any parameter encolsed by < > is a mandatory field.
   * Any parameter enclosed by [ ] is an optional field.
   * For command part 1-7, if parameter present, the WRITE function is going to
     update else READ function will be enabled.
   * For command </ALL>, if Output File Name present, the SMBIOS information
     will be saved intothe file else it will be displayed on screen.
   * Using </DMS> without parameter can get ¡§CONFIG.DMS¡¨ file in same
     directory, otherwise, the user-defined output file will contain the
     example syntax.
   * Using </OS> without any parameter will display all OEM string on screen.
   * The format of BIOS release date is "mm/dd/yyyy".
<eof>