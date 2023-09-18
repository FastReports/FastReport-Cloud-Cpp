/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CreateFTPUploadTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



CreateFTPUploadTaskVM::CreateFTPUploadTaskVM()
{
    m_archive = false;
    m_archiveIsSet = false;
    m_archiveName = utility::conversions::to_string_t("");
    m_archiveNameIsSet = false;
    m_destinationFolder = utility::conversions::to_string_t("");
    m_destinationFolderIsSet = false;
    m_ftpHost = utility::conversions::to_string_t("");
    m_ftpHostIsSet = false;
    m_ftpPassword = utility::conversions::to_string_t("");
    m_ftpPasswordIsSet = false;
    m_ftpPort = 0;
    m_ftpPortIsSet = false;
    m_ftpUsername = utility::conversions::to_string_t("");
    m_ftpUsernameIsSet = false;
    m_useSFTP = false;
    m_useSFTPIsSet = false;
}

CreateFTPUploadTaskVM::~CreateFTPUploadTaskVM()
{
}

void CreateFTPUploadTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateFTPUploadTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_archiveIsSet)
    {
        val[utility::conversions::to_string_t(U("archive"))] = ModelBase::toJson(m_archive);
    }
    if(m_archiveNameIsSet)
    {
        val[utility::conversions::to_string_t(U("archiveName"))] = ModelBase::toJson(m_archiveName);
    }
    if(m_destinationFolderIsSet)
    {
        val[utility::conversions::to_string_t(U("destinationFolder"))] = ModelBase::toJson(m_destinationFolder);
    }
    if(m_ftpHostIsSet)
    {
        val[utility::conversions::to_string_t(U("ftpHost"))] = ModelBase::toJson(m_ftpHost);
    }
    if(m_ftpPasswordIsSet)
    {
        val[utility::conversions::to_string_t(U("ftpPassword"))] = ModelBase::toJson(m_ftpPassword);
    }
    if(m_ftpPortIsSet)
    {
        val[utility::conversions::to_string_t(U("ftpPort"))] = ModelBase::toJson(m_ftpPort);
    }
    if(m_ftpUsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("ftpUsername"))] = ModelBase::toJson(m_ftpUsername);
    }
    if(m_useSFTPIsSet)
    {
        val[utility::conversions::to_string_t(U("useSFTP"))] = ModelBase::toJson(m_useSFTP);
    }

    return val;
}

bool CreateFTPUploadTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("archive"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("archive")));
        if(!fieldValue.is_null())
        {
            bool refVal_setArchive;
            ok &= ModelBase::fromJson(fieldValue, refVal_setArchive);
            setArchive(refVal_setArchive);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("archiveName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("archiveName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setArchiveName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setArchiveName);
            setArchiveName(refVal_setArchiveName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("destinationFolder"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("destinationFolder")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDestinationFolder;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDestinationFolder);
            setDestinationFolder(refVal_setDestinationFolder);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ftpHost"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ftpHost")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFtpHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFtpHost);
            setFtpHost(refVal_setFtpHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ftpPassword"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ftpPassword")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFtpPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFtpPassword);
            setFtpPassword(refVal_setFtpPassword);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ftpPort"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ftpPort")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setFtpPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFtpPort);
            setFtpPort(refVal_setFtpPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ftpUsername"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ftpUsername")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFtpUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFtpUsername);
            setFtpUsername(refVal_setFtpUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("useSFTP"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("useSFTP")));
        if(!fieldValue.is_null())
        {
            bool refVal_setUseSFTP;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUseSFTP);
            setUseSFTP(refVal_setUseSFTP);
        }
    }
    return ok;
}

void CreateFTPUploadTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_archiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("archive")), m_archive));
    }
    if(m_archiveNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("archiveName")), m_archiveName));
    }
    if(m_destinationFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("destinationFolder")), m_destinationFolder));
    }
    if(m_ftpHostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ftpHost")), m_ftpHost));
    }
    if(m_ftpPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ftpPassword")), m_ftpPassword));
    }
    if(m_ftpPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ftpPort")), m_ftpPort));
    }
    if(m_ftpUsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ftpUsername")), m_ftpUsername));
    }
    if(m_useSFTPIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("useSFTP")), m_useSFTP));
    }
    if(m_cronExpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cronExpression")), m_cronExpression));
    }
    if(m_delayedRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("delayedRunTime")), m_delayedRunTime));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool CreateFTPUploadTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("archive"))))
    {
        bool refVal_setArchive;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("archive"))), refVal_setArchive );
        setArchive(refVal_setArchive);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("archiveName"))))
    {
        utility::string_t refVal_setArchiveName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("archiveName"))), refVal_setArchiveName );
        setArchiveName(refVal_setArchiveName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("destinationFolder"))))
    {
        utility::string_t refVal_setDestinationFolder;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("destinationFolder"))), refVal_setDestinationFolder );
        setDestinationFolder(refVal_setDestinationFolder);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ftpHost"))))
    {
        utility::string_t refVal_setFtpHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ftpHost"))), refVal_setFtpHost );
        setFtpHost(refVal_setFtpHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ftpPassword"))))
    {
        utility::string_t refVal_setFtpPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ftpPassword"))), refVal_setFtpPassword );
        setFtpPassword(refVal_setFtpPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ftpPort"))))
    {
        int32_t refVal_setFtpPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ftpPort"))), refVal_setFtpPort );
        setFtpPort(refVal_setFtpPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ftpUsername"))))
    {
        utility::string_t refVal_setFtpUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ftpUsername"))), refVal_setFtpUsername );
        setFtpUsername(refVal_setFtpUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("useSFTP"))))
    {
        bool refVal_setUseSFTP;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("useSFTP"))), refVal_setUseSFTP );
        setUseSFTP(refVal_setUseSFTP);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cronExpression"))))
    {
        utility::string_t refVal_setCronExpression;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cronExpression"))), refVal_setCronExpression );
        setCronExpression(refVal_setCronExpression);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("delayedRunTime"))))
    {
        utility::datetime refVal_setDelayedRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("delayedRunTime"))), refVal_setDelayedRunTime );
        setDelayedRunTime(refVal_setDelayedRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

bool CreateFTPUploadTaskVM::isArchive() const
{
    return m_archive;
}

void CreateFTPUploadTaskVM::setArchive(bool value)
{
    m_archive = value;
    m_archiveIsSet = true;
}

bool CreateFTPUploadTaskVM::archiveIsSet() const
{
    return m_archiveIsSet;
}

void CreateFTPUploadTaskVM::unsetarchive()
{
    m_archiveIsSet = false;
}
utility::string_t CreateFTPUploadTaskVM::getArchiveName() const
{
    return m_archiveName;
}

void CreateFTPUploadTaskVM::setArchiveName(const utility::string_t& value)
{
    m_archiveName = value;
    m_archiveNameIsSet = true;
}

bool CreateFTPUploadTaskVM::archiveNameIsSet() const
{
    return m_archiveNameIsSet;
}

void CreateFTPUploadTaskVM::unsetarchiveName()
{
    m_archiveNameIsSet = false;
}
utility::string_t CreateFTPUploadTaskVM::getDestinationFolder() const
{
    return m_destinationFolder;
}

void CreateFTPUploadTaskVM::setDestinationFolder(const utility::string_t& value)
{
    m_destinationFolder = value;
    m_destinationFolderIsSet = true;
}

bool CreateFTPUploadTaskVM::destinationFolderIsSet() const
{
    return m_destinationFolderIsSet;
}

void CreateFTPUploadTaskVM::unsetdestinationFolder()
{
    m_destinationFolderIsSet = false;
}
utility::string_t CreateFTPUploadTaskVM::getFtpHost() const
{
    return m_ftpHost;
}

void CreateFTPUploadTaskVM::setFtpHost(const utility::string_t& value)
{
    m_ftpHost = value;
    m_ftpHostIsSet = true;
}

bool CreateFTPUploadTaskVM::ftpHostIsSet() const
{
    return m_ftpHostIsSet;
}

void CreateFTPUploadTaskVM::unsetftpHost()
{
    m_ftpHostIsSet = false;
}
utility::string_t CreateFTPUploadTaskVM::getFtpPassword() const
{
    return m_ftpPassword;
}

void CreateFTPUploadTaskVM::setFtpPassword(const utility::string_t& value)
{
    m_ftpPassword = value;
    m_ftpPasswordIsSet = true;
}

bool CreateFTPUploadTaskVM::ftpPasswordIsSet() const
{
    return m_ftpPasswordIsSet;
}

void CreateFTPUploadTaskVM::unsetftpPassword()
{
    m_ftpPasswordIsSet = false;
}
int32_t CreateFTPUploadTaskVM::getFtpPort() const
{
    return m_ftpPort;
}

void CreateFTPUploadTaskVM::setFtpPort(int32_t value)
{
    m_ftpPort = value;
    m_ftpPortIsSet = true;
}

bool CreateFTPUploadTaskVM::ftpPortIsSet() const
{
    return m_ftpPortIsSet;
}

void CreateFTPUploadTaskVM::unsetftpPort()
{
    m_ftpPortIsSet = false;
}
utility::string_t CreateFTPUploadTaskVM::getFtpUsername() const
{
    return m_ftpUsername;
}

void CreateFTPUploadTaskVM::setFtpUsername(const utility::string_t& value)
{
    m_ftpUsername = value;
    m_ftpUsernameIsSet = true;
}

bool CreateFTPUploadTaskVM::ftpUsernameIsSet() const
{
    return m_ftpUsernameIsSet;
}

void CreateFTPUploadTaskVM::unsetftpUsername()
{
    m_ftpUsernameIsSet = false;
}
bool CreateFTPUploadTaskVM::isUseSFTP() const
{
    return m_useSFTP;
}

void CreateFTPUploadTaskVM::setUseSFTP(bool value)
{
    m_useSFTP = value;
    m_useSFTPIsSet = true;
}

bool CreateFTPUploadTaskVM::useSFTPIsSet() const
{
    return m_useSFTPIsSet;
}

void CreateFTPUploadTaskVM::unsetuseSFTP()
{
    m_useSFTPIsSet = false;
}
}
}
}

