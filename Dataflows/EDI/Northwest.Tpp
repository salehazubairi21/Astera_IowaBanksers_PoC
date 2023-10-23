<?xml version="1.0" encoding="utf-8"?>
<EdiPartner xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">
  <IsFolder>false</IsFolder>
  <Id>0</Id>
  <IsNewRecord>false</IsNewRecord>
  <Name>C:\Users\saleha.zubairi\Desktop\New folder (4)\EdiPartner3.Tpp</Name>
  <Description />
  <CreateDtTm>0001-01-01T00:00:00</CreateDtTm>
  <UpdateDtTm>0001-01-01T00:00:00</UpdateDtTm>
  <PartnerInfo>
    <PartnerName>IOWA_partners</PartnerName>
  </PartnerInfo>
  <DialectSetting xsi:type="X12Settings">
    <Encoding>utf-8</Encoding>
    <Version>5010X220</Version>
    <InboundTransactions />
    <OutboundTransactions />
    <UseSeparatorsInFile>true</UseSeparatorsInFile>
    <InterchangeHeader>
      <ISA11_StandardIdentifier>U</ISA11_StandardIdentifier>
      <SegmentSeparator>~</SegmentSeparator>
      <ISA16_ComponentSeparator>:</ISA16_ComponentSeparator>
      <SegmentSuffix>None</SegmentSuffix>
      <DataElementSeparator>*</DataElementSeparator>
    </InterchangeHeader>
    <FunctionalGroup>
      <GS4_DateFormat>yyyyMMdd</GS4_DateFormat>
      <GS5_TimeFormat>hhmm</GS5_TimeFormat>
    </FunctionalGroup>
    <Acknowledgement>
      <GenerateAk2OrIk2ForAcceptedTransactionSets>false</GenerateAk2OrIk2ForAcceptedTransactionSets>
    </Acknowledgement>
    <ValidationSettings>
      <ValidateAll>true</ValidateAll>
      <ValidateLength>true</ValidateLength>
      <ValidateCodes>true</ValidateCodes>
      <ValidateMaxLoopCount>true</ValidateMaxLoopCount>
      <ValidateRequired>true</ValidateRequired>
      <ValidateConditions>true</ValidateConditions>
      <ValidateMinLoopCount>false</ValidateMinLoopCount>
      <ValidateNotUsedSegments>false</ValidateNotUsedSegments>
      <ValidateNotUsedElements>false</ValidateNotUsedElements>
      <ValidateElementPattern>false</ValidateElementPattern>
      <ValidateNotUsedCodeItems>false</ValidateNotUsedCodeItems>
    </ValidationSettings>
  </DialectSetting>
  <SequenceObjects>
    <DbInfo Port="0" Protocol="http" AuthenticationType="SqlServerAuth" Policy="MBI_SSL" Partner="crm.dynamics.com" IsOnPremise="false" TNSNamesFilePath="" ConnectionTimeOut="15" CommandTimeOut="90" IsAccessWorkgroup="false" CreateNewTable="false" IsAccessExclusive="false" DataProvider="NullProvider" Schema="" TableSchema="" UseWindowsAuthentication="false" UseCurrentDatabase="false">
      <IsReadOnly>false</IsReadOnly>
      <providerFilter />
      <UseSharedConnection>false</UseSharedConnection>
      <SharedConnectionShareConnectionInstanceAmongDestinations xsi:nil="true" />
      <SharedConnectionUseTransaction xsi:nil="true" />
      <UseS3ForStaging>false</UseS3ForStaging>
      <StagingProvider>None</StagingProvider>
      <WebAuthentication>
        <AuthenticationMethod>None</AuthenticationMethod>
        <ConsumerKey />
        <ConsuerSecret />
        <RequestTokenTimeout>60</RequestTokenTimeout>
        <UserName />
        <Password />
        <TokenExpiryDateTime>0001-01-01T00:00:00</TokenExpiryDateTime>
      </WebAuthentication>
      <FtpConnectInfo>
        <Authentication>
          <AuthenticationMethod>None</AuthenticationMethod>
          <ConsumerKey />
          <ConsuerSecret />
          <RequestTokenTimeout>60</RequestTokenTimeout>
          <UserName />
          <Password />
          <TokenExpiryDateTime>0001-01-01T00:00:00</TokenExpiryDateTime>
        </Authentication>
        <Proxy>
          <UseProxy>false</UseProxy>
          <ProxyPort>8080</ProxyPort>
          <ProxyType>Socks4</ProxyType>
          <LogLevel>Off</LogLevel>
          <ProxyLoginName />
          <ProxyPassword />
        </Proxy>
        <TransportSecurity>
          <SecurityType>None</SecurityType>
          <CertificateFilePath>
            <Path />
            <UncPath />
          </CertificateFilePath>
          <CertificatePassword />
          <PrivateKey />
          <IntegrityProtectionType>None</IntegrityProtectionType>
        </TransportSecurity>
        <Port>21</Port>
        <Timeout>30</Timeout>
        <RetryCount>4</RetryCount>
        <RequireSSL>false</RequireSSL>
        <UserName />
        <Password />
        <LogLevel>Off</LogLevel>
        <EmailProtocol>Imap</EmailProtocol>
        <Type>Local</Type>
        <sharedConnectionName />
        <WebProtocol>Ftp</WebProtocol>
        <Protocol>Ftp</Protocol>
        <Details xsi:type="FtpsProtocolDetails">
          <UseProxy>false</UseProxy>
          <ProxyPort>8080</ProxyPort>
          <ProxyType>Socks4</ProxyType>
          <LogLevel>Off</LogLevel>
          <DisableSftp4>false</DisableSftp4>
          <ProxyLoginName />
          <ProxyPassword />
          <PassiveMode>true</PassiveMode>
          <SecurityType>None</SecurityType>
          <AllowTls1>false</AllowTls1>
          <AllowSsl3>false</AllowSsl3>
          <AllowedSuites>AllCiphers</AllowedSuites>
          <ClearCommandChannel>false</ClearCommandChannel>
          <DirectoryChangeRequired>false</DirectoryChangeRequired>
          <AcceptIfCertificateNotAuthenticated>false</AcceptIfCertificateNotAuthenticated>
          <SecureConnection>false</SecureConnection>
          <KeepSessionAliveDuringTransfer>false</KeepSessionAliveDuringTransfer>
          <SessionKeepAliveInterval>30</SessionKeepAliveInterval>
        </Details>
        <ProviderType>None</ProviderType>
      </FtpConnectInfo>
      <IsErp>false</IsErp>
      <SqlAnywhereAction>Connect_to_a_Running_DB_This_Computer</SqlAnywhereAction>
      <SecurityToken />
      <UseSandbox>false</UseSandbox>
      <RetrieveDeleted>false</RetrieveDeleted>
      <ResetCache>false</ResetCache>
      <WebProxyUserId />
      <WebProxyPassword />
      <JobId>0</JobId>
      <RedirectUri>http://localhost:8050/</RedirectUri>
      <OverrideDefaultOdbcDriverAttributes>false</OverrideDefaultOdbcDriverAttributes>
      <OdbcConnectionInfoType>DSN</OdbcConnectionInfoType>
      <NoSqlProvider>MongoDb</NoSqlProvider>
      <DynamoDBAccessKey />
      <DynamoDBSecretKey />
      <DynamoDBARN />
      <DynamoDBExternalID />
      <IsAssumeRole>false</IsAssumeRole>
      <RegionEndpoint />
      <IsNoSql>false</IsNoSql>
      <IsReplicaEnabled>false</IsReplicaEnabled>
      <AllowDiskUse>false</AllowDiskUse>
      <UseTLS>false</UseTLS>
      <UseSSL>false</UseSSL>
      <Keyspace />
      <ReplicaServers />
      <CursorTimeOut>600</CursorTimeOut>
      <NumberOfRecordsToScan>100</NumberOfRecordsToScan>
      <ReadPreference>Primary</ReadPreference>
      <AuthenticationDatabase>admin</AuthenticationDatabase>
    </DbInfo>
  </SequenceObjects>
  <EdiDialectType>X12</EdiDialectType>
</EdiPartner>