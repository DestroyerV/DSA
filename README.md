# 📚 DSA - My Data Structures and Algorithms Practice Repository

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](#license)
[![Next.js](https://img.shields.io/badge/Next.js-15.4.6-black)](https://nextjs.org)
[![React](https://img.shields.io/badge/React-19.1.0-blue)](https://reactjs.org)
[![TypeScript](https://img.shields.io/badge/TypeScript-5.x-blue)](https://www.typescriptlang.org)
[![Tailwind CSS](https://img.shields.io/badge/Tailwind_CSS-4.x-38B2AC)](https://tailwindcss.com)
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](#)

> My personal Data Structures and Algorithms practice repository converted into a modern web interface for easy code browsing and sharing, built with Next.js and TypeScript.

## 🚀 Project Overview

**DSA** started as my personal practice repository where I solve and implement various Data Structures and Algorithms problems. I decided to convert this collection into a web-based interface so that anyone can easily browse through my code implementations, solutions, and practice progress in a clean, organized manner.

### 🎯 Key Features

- **📖 Personal DSA Collection**: 90+ problems and algorithms I've practiced, covering arrays, sorting, patterns, hashing, STL, and mathematical operations
- **🔍 Easy Code Browsing**: Clean interface to view my code implementations organized by topics with syntax highlighting
- **📊 Dynamic Content Organization**: Automated index generation to keep my growing practice collection organized
- **⚡ Modern Web Interface**: Built with Next.js 15, React 19, and TypeScript 5 for smooth browsing experience
- **🎨 Clean Design**: Responsive design with Tailwind CSS 4 for easy viewing on any device
- **🔥 Fast Development**: Turbopack integration for quick updates as I add more solutions
- **📱 Mobile Friendly**: View my code implementations on any device
- **🌟 Code Highlighting**: Beautiful syntax highlighting with Prism React Renderer for better readability

## 🛠️ Tech Stack

### Frontend
- **Framework**: [Next.js](https://nextjs.org) 15.4.6 with App Router
- **UI Library**: [React](https://reactjs.org) 19.1.0
- **Language**: [TypeScript](https://www.typescriptlang.org) 5.x
- **Styling**: [Tailwind CSS](https://tailwindcss.com) 4.x
- **Syntax Highlighting**: [Prism React Renderer](https://github.com/FormidableLabs/prism-react-renderer) 2.3.1

### Development Tools
- **Build Tool**: [Turbopack](https://turbo.build/pack) (Next.js bundler)
- **Linting**: [ESLint](https://eslint.org) 9.x with Next.js config
- **PostCSS**: Tailwind CSS PostCSS plugin
- **Node Runtime**: Node.js with ES Modules support

### Core Languages
- **Web**: TypeScript (52.8%), JavaScript (5.2%), CSS (2.7%)
- **Algorithms**: C++ (39.3%)

## 📦 Local Setup & Installation

### Prerequisites
- **Node.js**: 18.x or higher
- **Package Manager**: npm, yarn, pnpm, or bun
- **Git**: For cloning the repository

### Quick Start

```bash
# Clone the repository
git clone https://github.com/DestroyerV/DSA.git
cd DSA

# Install dependencies
npm install
# or
yarn install
# or
pnpm install
# or
bun install

# Run the development server
npm run dev
# or
yarn dev
# or
pnpm dev
# or
bun dev
```

Open [http://localhost:3000](http://localhost:3000) in your browser to see the application.

### Environment Setup

No additional environment variables are required for local development. The application works out of the box.

## 📜 Available Scripts

The following npm scripts are available in `package.json`:

| Script | Command | Description |
|--------|---------|-------------|
| **`dev`** | `npm run prebuild && next dev --turbopack` | Starts development server with Turbopack and auto-generates data index |
| **`prebuild`** | `node scripts/buildCode.mjs` | Generates DSA index from C++ files in `/dsa` directory |
| **`build`** | `npm run prebuild && next build` | Creates production build with optimized assets |
| **`start`** | `next start` | Starts production server (requires `npm run build` first) |
| **`lint`** | `next lint` | Runs ESLint for code quality checks |

### Data Generation Script

The `scripts/buildCode.mjs` is a crucial Node.js script that:

- **📁 Scans** the `/dsa` directory recursively for C++ files (`.cpp`, `.h`, `.hpp`, `.txt`)
- **🔍 Indexes** all code files with metadata (path, name, content)
- **🌳 Builds** a hierarchical folder tree structure for navigation
- **💾 Generates** `data/dsa-index.json` consumed by the Next.js application
- **⏰ Timestamps** the generation for cache invalidation

```bash
# Run data generation manually
node scripts/buildCode.mjs
```

## 📂 Project Structure

```
striver-dsa/
├── 📁 app/                    # Next.js App Router pages and layouts
├── 📁 components/             # Reusable React components
├── 📁 data/                   # Generated JSON index files
│   └── dsa-index.json        # Auto-generated DSA content index
├── 📁 dsa/                    # C++ algorithm implementations
│   ├── 📁 arrays/            # Array-based algorithms
│   ├── 📁 hashing/           # Hash table implementations
│   ├── 📁 maths/             # Mathematical algorithms
│   ├── 📁 patterns/          # Pattern printing programs
│   ├── 📁 sorting/           # Sorting algorithms
│   └── 📁 stl/               # STL (Standard Template Library) examples
├── 📁 public/                 # Static assets (images, icons, etc.)
├── 📁 scripts/                # Build and utility scripts
│   └── buildCode.mjs         # DSA index generation script
├── 📁 types/                  # TypeScript type definitions
├── 📄 .gitignore             # Git ignore rules
├── 📄 README.md              # Project documentation (this file)
├── 📄 eslint.config.mjs      # ESLint configuration
├── 📄 next-env.d.ts          # Next.js TypeScript declarations
├── 📄 next.config.ts         # Next.js configuration
├── 📄 package.json           # Project dependencies and scripts
├── 📄 postcss.config.mjs     # PostCSS configuration
└── 📄 tsconfig.json          # TypeScript configuration
```

## 🔧 How It Works

### 1. **Content Generation Pipeline**
   - The `buildCode.mjs` script scans the `/dsa` folder for C++ files
   - Extracts file content, metadata, and builds a searchable index
   - Creates a hierarchical tree structure for intuitive navigation
   - Outputs `data/dsa-index.json` with timestamped data

### 2. **Web Application Flow**
   - Next.js loads the generated JSON index at build/runtime
   - React components render the DSA content with syntax highlighting
   - Users can browse topics, view code implementations, and search algorithms
   - Responsive design ensures optimal experience across all devices

### 3. **Development Workflow**
   - Add new C++ files to appropriate `/dsa` subdirectories
   - Run `npm run dev` to auto-generate index and start development server
   - Hot reload updates the UI instantly as you modify code or content

### 4. **Build & Deployment**
   - Production builds include pre-generated static content for optimal performance
   - All DSA implementations are indexed and ready for fast client-side navigation

## 🤝 Contributing

We welcome contributions to expand the DSA collection and improve the platform! Here's how to get started:

### Adding New Algorithms

1. **📁 Create** or navigate to the appropriate folder in `/dsa/`
2. **✍️ Write** your C++ implementation with clear comments
3. **🧪 Test** your algorithm with sample inputs/outputs
4. **🔄 Run** `npm run dev` to regenerate the index
5. **🚀 Submit** a pull request with your changes

### Code Standards

- **Language**: C++ with clear, educational comments
- **Naming**: Descriptive file and function names
- **Structure**: Organize files by topic/category
- **Examples**: Include sample usage in `main()` function
- **Performance**: Add time/space complexity comments where relevant

### Development Guidelines

1. Fork the repository
2. Create a feature branch: `git checkout -b feature/new-algorithm`
3. Make your changes and test locally
4. Commit with descriptive messages: `git commit -m "feat: add binary search implementation"`
5. Push to your branch: `git push origin feature/new-algorithm`
6. Open a pull request with detailed description

## 🗺️ Roadmap

### 🎯 Phase 1 - Current (Q3 2025)
- [x] Basic Next.js application setup
- [x] C++ code indexing and generation
- [x] Responsive UI with Tailwind CSS
- [x] Syntax highlighting for code display
- [ ] Search functionality across algorithms
- [ ] Algorithm categorization and filtering

### 🚀 Phase 2 - Planned (Q4 2025)
- [ ] **Interactive Code Editor**: In-browser C++ compilation and execution
- [ ] **Complexity Analysis**: Visual time/space complexity graphs
- [ ] **Test Case Runner**: Automated testing with custom inputs
- [ ] **Performance Benchmarks**: Algorithm performance comparisons
- [ ] **Learning Paths**: Guided tutorials for beginners

### 🌟 Phase 3 - Future (2026)
- [ ] **Multi-language Support**: Java, Python, JavaScript implementations
- [ ] **Visual Algorithms**: Step-by-step algorithm visualizations
- [ ] **Community Features**: User submissions and discussions
- [ ] **Mobile App**: Native iOS/Android applications
- [ ] **AI Integration**: Algorithm recommendations and explanations

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

<div align="center">
  <strong>Built with ❤️ by <a href="https://github.com/DestroyerV">Vaibhav Mishra</a></strong>
  <br>
</div>

---

### 🔗 Quick Links

- [🏠 Homepage](https://github.com/DestroyerV/DSA)
- [🐛 Report Issues](https://github.com/DestroyerV/DSA/issues)
- [💡 Feature Requests](https://github.com/DestroyerV/DSA/issues/new)
- [🤝 Contributing Guide](#contributing)

**⭐ Star this repo if you find it helpful!**
