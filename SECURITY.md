# 🔐 Security Policy

## 🛡️ C Language Learning Security Policy

Thank you for helping keep **C Language Learning** safe and reliable.

This repository is created for learning and practicing the **C programming language**. While this is an educational project, maintaining a secure and trustworthy environment is important for everyone who uses or contributes to this repository.

---

# 📌 Supported Versions

Security updates are provided for the latest version of this repository.

| Version | Supported |
|---------|-----------|
| Latest Release | ✅ Yes |
| Older Versions | ❌ No |

We recommend always using the latest version of the repository.

---

# 🚨 Reporting a Security Issue

If you discover a security vulnerability, please report it responsibly.

Do **not** create a public GitHub issue for security problems, as this may expose sensitive information.

Instead, report the issue privately through:

- GitHub Security Advisories
- Private communication with the repository maintainer

Please include:

- A clear description of the vulnerability
- Steps to reproduce the issue
- Affected file(s) or program(s)
- Possible impact
- Suggested solution (if available)

---

# 🔍 What Should Be Reported?

Examples of security issues:

- Malicious code added accidentally
- Unsafe C programming practices
- Programs causing unexpected system behavior
- Vulnerable dependencies
- Exposure of sensitive information
- Incorrect handling of files or memory
- Unsafe input handling examples

---

# 💻 Secure Coding Practices

When contributing C programs, follow these practices:

## ✅ Input Validation

Always validate user input.

Avoid:

```c
scanf("%s", name);
