Action()
{
	lr_start_transaction("GetStoreInformation");
	
	web_service_call( "StepName=GetStoreInformation_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetStoreInformation",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482163813.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>TEST</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<StoreNumber>1363</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("GetStoreInformation",LR_AUTO);
	
	lr_start_transaction("GetStoresByZipCode");
	
	web_service_call( "StepName=GetStoresByZipCode_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetStoresByZipCode",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482164337.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>TEST</MachineName>"
				"<RadialDistance>"
					"<UnitOfMeasureType>Mile</UnitOfMeasureType>"
					"<Value>10</Value>"
				"</RadialDistance>"
				"<ZipCode>76051</ZipCode>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("GetStoresByZipCode",LR_AUTO);
	
	lr_start_transaction("GetStoreProductInventoryByZipCode");
	
	web_service_call( "StepName=GetStoreProductInventoryByZipCode_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetStoreProductInventoryByZipCode",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482164843.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>TEST</MachineName>"
				"<ProductId>129006</ProductId>"
				"<ZipCode>76051</ZipCode>"
				"<RadialDistance>"
					"<UnitOfMeasureType>Mile</UnitOfMeasureType>"
					"<Value>10</Value>"
				"</RadialDistance>"
				"<MaxRecordCount>100</MaxRecordCount>"
				"<IncludeStoresWithoutInventory>true</IncludeStoresWithoutInventory>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("GetStoreProductInventoryByZipCode",LR_AUTO);
	
	lr_start_transaction("GetProductTradeInValue");
	
	web_service_call( "StepName=GetProductTradeInValue_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetProductTradeInValue",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482168426.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>TEST</MachineName>"
				"<ProductIDs>"
					"<int>130202</int>"
				"</ProductIDs>"
				"<StoreNumber>1363</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("GetProductTradeInValue",LR_AUTO);
	
	lr_start_transaction("GetStoreCheckinsByCustomer");
	
	web_service_call( "StepName=GetStoreCheckinsByCustomer_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetStoreCheckinsByCustomer",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482168822.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>TEST</MachineName>"
				"<CustomerID>1253369117</CustomerID>"
				"<PageNumber>1</PageNumber>"
				"<PageSize>1</PageSize>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("GetStoreCheckinsByCustomer",LR_AUTO);
	
	return 0;
}
