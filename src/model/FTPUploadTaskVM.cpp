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



#include "CppRestOpenAPIClient/model/FTPUploadTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



FTPUploadTaskVM::FTPUploadTaskVM()
{
    m_archive = false;
    m_archiveIsSet = false;
    m_archiveName = utility::conversions::to_string_t("");
    m_archiveNameIsSet = false;
    m_destinationFolder = utility::conversions::to_string_t("");
    m_destinationFolderIsSet = false;
    m_ftpHost = utility::conversions::to_string_t("");
    m_ftpHostIsSet = false;
    m_ftpPort = 0;
    m_ftpPortIsSet = false;
    m_ftpUsername = utility::conversions::to_string_t("");
    m_ftpUsernameIsSet = false;
    m_useSFTP = false;
    m_useSFTPIsSet = false;
}

FTPUploadTaskVM::~FTPUploadTaskVM()
{
}

void FTPUploadTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value FTPUploadTaskVM::toJson() const
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

bool FTPUploadTaskVM::fromJson(const web::json::value& val)
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

void FTPUploadTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_delayedWasRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("delayedWasRunTime")), m_delayedWasRunTime));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_id));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_recurrentRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recurrentRunTime")), m_recurrentRunTime));
    }
    if(m_recurrentWasRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recurrentWasRunTime")), m_recurrentWasRunTime));
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

bool FTPUploadTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("delayedWasRunTime"))))
    {
        utility::datetime refVal_setDelayedWasRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("delayedWasRunTime"))), refVal_setDelayedWasRunTime );
        setDelayedWasRunTime(refVal_setDelayedWasRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recurrentRunTime"))))
    {
        utility::datetime refVal_setRecurrentRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recurrentRunTime"))), refVal_setRecurrentRunTime );
        setRecurrentRunTime(refVal_setRecurrentRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recurrentWasRunTime"))))
    {
        utility::datetime refVal_setRecurrentWasRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recurrentWasRunTime"))), refVal_setRecurrentWasRunTime );
        setRecurrentWasRunTime(refVal_setRecurrentWasRunTime);
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

bool FTPUploadTaskVM::isArchive() const
{
    return m_archive;
}

void FTPUploadTaskVM::setArchive(bool value)
{
    m_archive = value;
    m_archiveIsSet = true;
}

bool FTPUploadTaskVM::archiveIsSet() const
{
    return m_archiveIsSet;
}

void FTPUploadTaskVM::unsetarchive()
{
    m_archiveIsSet = false;
}
utility::string_t FTPUploadTaskVM::getArchiveName() const
{
    return m_archiveName;
}

void FTPUploadTaskVM::setArchiveName(const utility::string_t& value)
{
    m_archiveName = value;
    m_archiveNameIsSet = true;
}

bool FTPUploadTaskVM::archiveNameIsSet() const
{
    return m_archiveNameIsSet;
}

void FTPUploadTaskVM::unsetarchiveName()
{
    m_archiveNameIsSet = false;
}
utility::string_t FTPUploadTaskVM::getDestinationFolder() const
{
    return m_destinationFolder;
}

void FTPUploadTaskVM::setDestinationFolder(const utility::string_t& value)
{
    m_destinationFolder = value;
    m_destinationFolderIsSet = true;
}

bool FTPUploadTaskVM::destinationFolderIsSet() const
{
    return m_destinationFolderIsSet;
}

void FTPUploadTaskVM::unsetdestinationFolder()
{
    m_destinationFolderIsSet = false;
}
utility::string_t FTPUploadTaskVM::getFtpHost() const
{
    return m_ftpHost;
}

void FTPUploadTaskVM::setFtpHost(const utility::string_t& value)
{
    m_ftpHost = value;
    m_ftpHostIsSet = true;
}

bool FTPUploadTaskVM::ftpHostIsSet() const
{
    return m_ftpHostIsSet;
}

void FTPUploadTaskVM::unsetftpHost()
{
    m_ftpHostIsSet = false;
}
int32_t FTPUploadTaskVM::getFtpPort() const
{
    return m_ftpPort;
}

void FTPUploadTaskVM::setFtpPort(int32_t value)
{
    m_ftpPort = value;
    m_ftpPortIsSet = true;
}

bool FTPUploadTaskVM::ftpPortIsSet() const
{
    return m_ftpPortIsSet;
}

void FTPUploadTaskVM::unsetftpPort()
{
    m_ftpPortIsSet = false;
}
utility::string_t FTPUploadTaskVM::getFtpUsername() const
{
    return m_ftpUsername;
}

void FTPUploadTaskVM::setFtpUsername(const utility::string_t& value)
{
    m_ftpUsername = value;
    m_ftpUsernameIsSet = true;
}

bool FTPUploadTaskVM::ftpUsernameIsSet() const
{
    return m_ftpUsernameIsSet;
}

void FTPUploadTaskVM::unsetftpUsername()
{
    m_ftpUsernameIsSet = false;
}
bool FTPUploadTaskVM::isUseSFTP() const
{
    return m_useSFTP;
}

void FTPUploadTaskVM::setUseSFTP(bool value)
{
    m_useSFTP = value;
    m_useSFTPIsSet = true;
}

bool FTPUploadTaskVM::useSFTPIsSet() const
{
    return m_useSFTPIsSet;
}

void FTPUploadTaskVM::unsetuseSFTP()
{
    m_useSFTPIsSet = false;
}
}
}
}


