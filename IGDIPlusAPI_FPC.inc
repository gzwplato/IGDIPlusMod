
{$UNDEF HAS_SYSTEM_UITYPES}
{$UNDEF HAS_STREAM_WRITEDATA}
{$UNDEF HAS_READ_WITH_OFFSET}

{$IF FPC_FULLVERSION >= 30200}{$DEFINE HAS_SYSTEM_UITYPES}{$ENDIF}
{$IF FPC_FULLVERSION >= 30301}
  {$DEFINE HAS_STREAN_WRITEDATA}
  {$DEFINE HAS_READ_WITH_OFFSET}
{$ENDIF}

